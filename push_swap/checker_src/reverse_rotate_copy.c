/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_copy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:45:05 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/17 23:06:00 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb1(t_stack **b)
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

void	rra1(t_stack **a)
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

void	rrr1(t_stack **a, t_stack **b)
{
	rra1(a);
	rrb1(b);
}
