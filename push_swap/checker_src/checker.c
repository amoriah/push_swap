/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 21:38:15 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/17 23:06:07 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	checker(t_stack **a, t_stack **b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		swap(a, b, str);
		psh(a, b, str);
		rotate(a, b, str);
		free(str);
		str = get_next_line(0);
	}
	free (str);
}

int	main(int ac, char **av)
{
	int		size_arr;
	t_stack	*a;
	t_stack	*b;

	if (ac == 1)
		return (0);
	av++;
	ac--;
	a = (t_stack *)malloc(sizeof(t_stack));
	check_alloc(&a);
	b = (t_stack *)malloc(sizeof(t_stack));
	check_alloc(&b);
	b->head = NULL;
	b->len = 0;
	size_arr = size_array(av);
	a = fill_the_stack_a1(a, av, size_arr);
	checker(&a, &b);
	if (check_sorting(a->head) && a->len && !(b->len))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	delete_list(&a->head);
	free(a);
	free(b);
	return (0);
}
