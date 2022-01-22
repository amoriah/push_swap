/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 21:24:40 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/17 21:26:26 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_alloc_list(t_list *list)
{
	if (!list)
	{
		ft_putendl_fd(ERR_NO_MALLOC, 1);
		exit (-1);
	}
	return ;
}

void	check_int_arr(int *int_arr)
{
	if (!int_arr)
	{
		ft_putendl_fd(ERR_NO_MALLOC, 1);
		exit (-1);
	}
	return ;
}

void	check_alloc(t_stack **stack)
{
	if (!stack)
	{
		ft_putendl_fd(ERR_NO_MALLOC, 1);
		exit (-1);
	}
	return ;
}
