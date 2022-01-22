/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 00:31:11 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/17 21:26:41 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len_arr(char **array)
{
	int	i;

	i = 0;
	while (*(array + i))
		i++;
	return (i);
}

int	size_array(char **av)
{
	int		i;
	int		n;
	int		size;
	char	**arr;

	i = 0;
	size = 0;
	while (*(av + i))
	{
		arr = ft_split(*(av + i), ' ');
		if (!arr || !*arr)
		{
			ft_putendl_fd(ERR_NO_ARGV, 1);
			exit (-1);
		}
		n = len_arr(arr);
		ft_free_array(arr, n);
		size += n;
		i++;
	}
	return (size);
}
