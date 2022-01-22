/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:46:44 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/16 21:46:48 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}

int	ft_min(int a, int b)
{
	if (a <= b)
		return (a);
	return (b);
}

void	new_min_amd_max(t_stack **a)
{
	if ((*a)->head->value < (*a)->min)
		(*a)->min = (*a)->head->value;
	if ((*a)->head->value > (*a)->max)
		(*a)->max = (*a)->head->value;
}
