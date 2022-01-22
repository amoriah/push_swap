/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_read_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:32:06 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/17 23:06:30 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack **a, t_stack **b, char *oper)
{
	if (ft_strnstr(oper, "sa", 2))
		sa1((*a)->head);
	else if (ft_strnstr(oper, "sb", 2))
		sb1((*b)->head);
	else if (ft_strnstr(oper, "ss", 2))
		ss1((*a)->head, (*b)->head);
	return ;
}

void	psh(t_stack **a, t_stack **b, char *oper)
{
	if (ft_strnstr(oper, "pa", 2))
		pa1(a, b);
	else if (ft_strnstr(oper, "pb", 2))
		pb1(b, a);
	return ;
}

void	rotate(t_stack **a, t_stack **b, char *oper)
{
	if (ft_strnstr(oper, "ra", 2))
		ra1(a);
	else if (ft_strnstr(oper, "rb", 2))
		rb1(b);
	else if (ft_strnstr(oper, "rra", 3))
		rra1(a);
	else if (ft_strnstr(oper, "rrb", 3))
		rrb1(b);
	else if (ft_strnstr(oper, "rrr", 3))
		rrr1(a, b);
	else if (ft_strnstr(oper, "rr", 2))
		rr1(a, b);
	return ;
}
