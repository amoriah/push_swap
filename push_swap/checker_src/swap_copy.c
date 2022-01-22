/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 20:36:32 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/17 23:05:53 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_swap(int *a, int *b)
{
	int	chg;

	chg = *a;
	*a = *b;
	*b = chg;
}

void	sa1(t_list *a)
{
	if (a == NULL)
		return ;
	else
		ft_swap(&a->value, &a->next->value);
}

void	sb1(t_list *b)
{
	if (b == NULL)
		return ;
	else
		ft_swap(&b->value, &b->next->value);
}

void	ss1(t_list *a, t_list *b)
{
	if (b == NULL || a == NULL)
		return ;
	else
	{
		ft_swap(&a->value, &a->next->value);
		ft_swap(&b->value, &b->next->value);
	}
}
