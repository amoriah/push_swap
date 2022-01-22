/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 00:30:59 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/17 21:25:47 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorting(t_list *head)
{
	t_list	*first;
	t_list	*second;

	first = head;
	second = head->next;
	while (second)
	{
		if (first->value < second->value)
		{
			first = first->next;
			second = second->next;
		}
		else
			return (0);
	}
	return (1);
}

int	ft_isnum(char *str)
{
	if ((*str == ' ') || (*str == '\t') || (*str == '-') || (*str == '+'))
		str++;
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			ft_putendl_fd(ERR_NO_NUMBERS, 1);
			exit (-1);
		}
		str++;
	}
	return (1);
}

void	is_dublicate(t_list *stack)
{
	t_list	*current;
	t_list	*runner;

	current = stack;
	while (current)
	{
		runner = current;
		while (runner->next)
		{
			if (runner->next->value == current->value)
			{
				ft_putendl_fd(ERR_YES_DUBL, 1);
				exit (-1);
			}
			else
				runner = runner->next;
		}
		current = current->next;
	}
}
