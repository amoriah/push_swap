/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:40:36 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/16 22:17:34 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	position_elem(t_stack *stack, int elem)
{
	int		n;
	t_list	*lst;

	n = 0;
	lst = stack->head;
	while (lst && lst->value != elem)
	{
		n++;
		lst = lst->next;
	}
	return (n);
}

int	pos_in_a(t_stack *stack, int elem)
{
	int		n;
	t_list	*lst;

	n = 0;
	if (elem > stack->max)
		return (position_elem(stack, stack->max) + 1);
	else if (elem < stack->min)
		return (position_elem(stack, stack->min));
	lst = stack->head;
	if (lst->value > elem && (get_last(lst)->value < elem))
		return (0);
	while (lst && lst->next && !(lst->value < elem
			&& (lst->next)->value > elem))
	{
		n++;
		lst = lst->next;
	}
	return (++n);
}

t_oper	count_oper(int pos_a, int pos_b, int len_a, int len_b)
{
	t_oper	count;

	count.ra = pos_a;
	count.rb = pos_b;
	count.rra = len_a - pos_a;
	count.rrb = len_b - pos_b;
	count.m1 = ft_max(count.ra, count.rb);
	count.m2 = count.ra + count.rrb;
	count.m3 = count.rra + count.rb;
	count.m4 = ft_max(count.rra, count.rrb);
	return (count);
}

t_oper	count_min_oper(t_stack *a, t_stack *b)
{
	int		min;
	int		pos_b;
	t_list	*lst_b;
	t_oper	move;
	t_oper	min_move;

	min = a->len + b->len;
	pos_b = 0;
	lst_b = b->head;
	min_move = count_oper(0, 0, 0, 0);
	while (lst_b)
	{
		move = count_oper(pos_in_a(a, lst_b->value), pos_b, a->len, b->len);
		if (min > ft_min(ft_min(move.m1, move.m2), ft_min(move.m3, move.m4)))
		{
			min_move = move;
			min = ft_min(ft_min(move.m1, move.m2), ft_min(move.m3, move.m4));
		}
		pos_b++;
		lst_b = lst_b->next;
	}
	return (min_move);
}

void	sorting(t_stack **a, t_stack **b)
{
	int		min;
	t_oper	oper_ctr;

	while ((*b)->head)
	{
		oper_ctr = count_min_oper(*a, *b);
		min = ft_min(ft_min(oper_ctr.m1, oper_ctr.m2),
				ft_min(oper_ctr.m3, oper_ctr.m4));
		if (oper_ctr.m1 == min)
			juggl_1(a, b, oper_ctr);
		else if (oper_ctr.m2 == min)
			juggl_2(a, b, oper_ctr);
		else if (oper_ctr.m3 == min)
			juggl_3(a, b, oper_ctr);
		else if (oper_ctr.m4 == min)
			juggl_4(a, b, oper_ctr);
		new_min_amd_max(a);
	}
}
