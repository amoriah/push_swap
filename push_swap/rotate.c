/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:43:29 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/17 21:34:32 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	do_ra(t_stack **a)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	if ((*a)->head == NULL)
		return ;
	first = (*a)->head;
	second = (*a)->head->next;
	last = get_last((*a)->head);
	(*a)->head = second;
	last->next = first;
	first->next = NULL;
}

void	ra(t_stack **a)
{
	do_ra(a);
	write(1, "ra\n", 3);
}

static void	do_rb(t_stack **b)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	if ((*b)->head == NULL)
		return ;
	first = (*b)->head;
	second = (*b)->head->next;
	last = get_last((*b)->head);
	(*b)->head = second;
	last->next = first;
	first->next = NULL;
}

void	rb(t_stack **b)
{
	do_rb(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	do_rb(b);
	do_ra(a);
	write (1, "rr\n", 3);
}
