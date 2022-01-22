/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 20:36:32 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/16 21:57:39 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(int *a, int *b)
{
	int	chg;

	chg = *a;
	*a = *b;
	*b = chg;
}

void	sa(t_list *a)
{
	if (a == NULL)
		return ;
	else
		ft_swap(&a->value, &a->next->value);
	write (1, "sa\n", 3);
}

void	sb(t_list *b)
{
	if (b == NULL)
		return ;
	else
		ft_swap(&b->value, &b->next->value);
	write (1, "sb\n", 3);
}

void	ss(t_list *a, t_list *b)
{
	if (b == NULL || a == NULL)
		return ;
	else
	{
		ft_swap(&a->value, &a->next->value);
		ft_swap(&b->value, &b->next->value);
	}
	write (1, "ss\n", 3);
}
