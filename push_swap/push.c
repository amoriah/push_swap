/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:45:52 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/17 22:01:58 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack **stack, int data)
{
	t_list	*tmp;
	t_list	*p;

	p = (t_list *)malloc(sizeof(t_list));
	check_alloc_list(p);
	p->value = data;
	if ((*stack)->len == 0)
	{
		p->next = NULL;
		(*stack)->head = p;
	}
	else
	{
		tmp = (*stack)->head;
		(*stack)->head = p;
		p->next = tmp;
	}
}

void	pop(t_stack **stack)
{
	t_list	*prev;

	prev = NULL;
	if ((*stack)->head == NULL)
		return ;
	prev = (*stack)->head;
	(*stack)->head = (*stack)->head->next;
	free(prev);
}

void	pb(t_stack **b, t_stack **a)
{
	if (*a == NULL && (*a)->head == NULL)
		return ;
	push(b, (*a)->head->value);
	pop(a);
	(*b)->len++;
	(*a)->len--;
	write(1, "pb\n", 3);
}

void	pa(t_stack **a, t_stack **b)
{
	if (*b == NULL && (*b)->head == NULL)
		return ;
	push(a, (*b)->head->value);
	pop(b);
	(*a)->len++;
	(*b)->len--;
	write(1, "pa\n", 3);
}
