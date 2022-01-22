/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_mapi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:03:20 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/16 22:04:51 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	list_mapi_1_stack(t_stack **stack, void (*f)(t_stack **), int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		f(stack);
		i++;
	}
}

void	list_mapi_2_stacks(t_stack **stack1, t_stack **stack2,
							void (*f)(t_stack **, t_stack **), int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		f(stack1, stack2);
		i++;
	}
}
