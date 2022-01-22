/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_last_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:46:23 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/17 22:03:27 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_last(t_list *head)
{
	if (head == NULL)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}

t_list	*get_penultimate(t_list *head)
{
	if (head == NULL)
		return (NULL);
	if (head->next == NULL)
		return (NULL);
	while (head->next->next)
		head = head->next;
	return (head);
}

void	push_back(t_list *head, int value)
{
	t_list	*tmp;
	t_list	*last;

	tmp = (t_list *)malloc(sizeof(t_list));
	check_alloc_list(tmp);
	tmp->value = value;
	tmp->next = NULL;
	last = get_last(head);
	last->next = tmp;
}
