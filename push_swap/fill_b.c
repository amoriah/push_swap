/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 00:31:07 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/17 21:35:51 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*fill_the_stack_b(t_stack **a, int size)
{
	t_stack	*b;

	b = (t_stack *)malloc(sizeof(t_stack));
	check_alloc(&b);
	b->head = NULL;
	b->len = 0;
	if (size < 3)
		return (b);
	if (!check_sorting((*a)->head) && size > 3)
	{
		while ((*a)->len > 3)
			pb(&b, a);
	}
	sorting_three(a, &b);
	return (b);
}
