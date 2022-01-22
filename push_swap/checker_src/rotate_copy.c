/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:45:57 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/17 23:05:58 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr1(t_stack **a, t_stack **b)
{
	ra1(a);
	rb1(b);
}

void	ra1(t_stack **a)
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

void	rb1(t_stack **b)
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
