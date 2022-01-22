/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:45:39 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/17 23:06:02 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push1(t_stack **stack, int data)
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

void	pop1(t_stack **stack)
{
	t_list	*prev;

	prev = NULL;
	if ((*stack)->head == NULL)
		return ;
	prev = (*stack)->head;
	(*stack)->head = (*stack)->head->next;
	free(prev);
}

void	pb1(t_stack **b, t_stack **a)
{
	if (*a == NULL || (*a)->head == NULL)
		return ;
	push1(b, (*a)->head->value);
	pop1(a);
	(*b)->len++;
	(*a)->len--;
}

void	pa1(t_stack **a, t_stack **b)
{
	if (*b == NULL || (*b)->head == NULL)
		return ;
	push1(a, (*b)->head->value);
	pop1(b);
	(*a)->len++;
	(*b)->len--;
}
