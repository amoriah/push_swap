/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:46:04 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/17 18:08:44 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	do_rrb(t_stack **b)
{
	t_list	*first;
	t_list	*penultimate;
	t_list	*last;

	if ((*b)->head == NULL)
		return ;
	first = (*b)->head;
	penultimate = get_penultimate((*b)->head);
	last = get_last((*b)->head);
	(*b)->head = last;
	(*b)->head->next = first;
	penultimate->next = NULL;
}

void	rrb(t_stack **b)
{
	do_rrb(b);
	write(1, "rrb\n", 4);
}

static void	do_rra(t_stack **a)
{
	t_list	*first;
	t_list	*penultimate;
	t_list	*last;

	if ((*a)->head == NULL)
		return ;
	first = (*a)->head;
	penultimate = get_penultimate((*a)->head);
	last = get_last((*a)->head);
	(*a)->head = last;
	(*a)->head->next = first;
	penultimate->next = NULL;
}

void	rra(t_stack **a)
{
	do_rra(a);
	write(1, "rra\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	do_rra(a);
	do_rrb(b);
	write (1, "rrr\n", 4);
}
