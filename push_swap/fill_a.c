/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 00:31:04 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/18 13:34:24 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*fill_the_int_arr(int *int_arr, char **av)
{
	char	**arr;
	int		i;
	int		len;
	int		n;

	i = 0;
	len = 0;
	while (*(av))
	{
		arr = ft_split(*(av), ' ');
		i = 0;
		while (*(arr + i))
		{
			*(int_arr + i + len) = ft_atoi(*(arr + i));
			i++;
		}
		n = len_arr(arr);
		ft_free_array(arr, n);
		len += i;
		av++;
	}
	return (int_arr);
}

void	initializing(int size_arr, t_stack *a)
{
	int	i;

	i = 0;
	a->len = size_arr;
	a->min = 0;
	a->max = 0;
	return ;
}

t_stack	*fill_the_stack_a(t_stack *a, char **av, int size_arr)
{
	int		*int_arr;
	int		i;
	t_list	*first;

	i = 1;
	int_arr = (int *)malloc(sizeof(int) * size_arr);
	check_int_arr(int_arr);
	fill_the_int_arr(int_arr, av);
	first = (t_list *)malloc(sizeof(t_list));
	check_alloc_list(first);
	first->value = int_arr[0];
	first->next = NULL;
	a->head = first;
	while (i < size_arr)
	{
		push_back(a->head, int_arr[i]);
		i++;
	}
	is_dublicate(a->head);
	initializing(size_arr, a);
	free(int_arr);
	return (a);
}
