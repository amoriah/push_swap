/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 20:45:23 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/17 17:52:08 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_swap2_part2(t_stack *a, t_stack *b)
{
	int	one;
	int	two;
	int	three;

	one = a->head->value;
	two = a->head->next->value;
	three = a->head->next->next->value;
	if (one > two && two > three && three < one)
	{
		if (b->len > 1 && (b->head) && (b->head->next)
			&& (b->head->value < b->head->next->value))
			ss(a->head, b->head);
		else
			sa(a->head);
	}
	return ;
}

void	do_swap2(t_stack *a, t_stack *b)
{
	int	one;
	int	two;
	int	three;

	one = a->head->value;
	two = a->head->next->value;
	three = a->head->next->next->value;
	do_swap2_part2(a, b);
	if (one < two && two > three && three > one)
	{
		if (b->len > 1 && (b->head) && (b->head->next)
			&& (b->head->value < b->head->next->value))
			ss(a->head, b->head);
		else
			sa(a->head);
	}	
	else if (one > two && two < three && three > one)
	{
		if (b->len > 1 && (b->head) && (b->head->next)
			&& (b->head->value < b->head->next->value))
			ss(a->head, b->head);
		else
			sa(a->head);
	}
	return ;
}

static void	do_swap(t_stack *a, int one, int two, int three)
{
	if (one < two && two > three && three > one)
		sa(a->head);
	if (one > two && two < three && three > one)
		sa(a->head);
	if (one > two && two > three && three < one)
		sa(a->head);
	return ;
}

static void	do_rra_or_ra(t_stack **a, int one, int two, int three)
{
	if (one < two && two > three && three < one)
		rra(a);
	else if (one > two && two < three && three < one)
		ra(a);
}

void	sorting_three(t_stack **a, t_stack **b)
{
	if (!check_sorting((*a)->head))
	{
		if ((*b)->len > 1)
			do_swap2(*a, *b);
		else
			do_swap((*a), (*a)->head->value, (*a)->head->next->value,
				(*a)->head->next->next->value);
		do_rra_or_ra(a, (*a)->head->value, (*a)->head->next->value,
			(*a)->head->next->next->value);
	}
	(*a)->min = ft_min(ft_min((*a)->head->value, (*a)->head->next->value),
			(*a)->head->next->next->value);
	(*a)->max = ft_max(ft_max((*a)->head->value, (*a)->head->next->value),
			(*a)->head->next->next->value);
}
