/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 00:30:51 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/18 13:13:03 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_n(t_stack **stack, int n)
{
	if (n - ((*stack)->len) / 2 - ((*stack)->len) % 2 > 0)
	{
		n = (*stack)->len - n + 1;
		list_mapi_1_stack(stack, rra, n);
	}
	else
	{
		n = n - 1;
		list_mapi_1_stack(stack, ra, n);
	}
}

int	main(int ac, char **av)
{
	int		size_arr;
	t_stack	*a;
	t_stack	*b;

	if (ac == 1)
		return (0);
	a = (t_stack *)malloc(sizeof(t_stack));
	check_alloc(&a);
	av++;
	ac--;
	size_arr = size_array(av);
	a = fill_the_stack_a(a, av, size_arr);
	if (size_arr < 3 && !check_sorting(a->head))
		sa(a->head);
	b = fill_the_stack_b(&a, size_arr);
	sorting(&a, &b);
	rotate_n(&a, position_elem(a, a->min) + 1);
	delete_list(&b->head);
	delete_list(&a->head);
	free(b);
	free(a);
	return (0);
}
