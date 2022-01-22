/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 10:01:30 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/18 13:53:41 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int		min;
	long	result;
	int		i;

	i = 0;
	min = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		min = -min;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isnum(str) && str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if ((result >= 2147483647) || ((result * min) <= -2147483648))
	{
		ft_putendl_fd(ERR_BAD_INT, 1);
		exit (-1);
	}
	return (result * min);
}
