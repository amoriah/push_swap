/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   juggling.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:27:58 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/16 22:05:15 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	juggl_1(t_stack **a, t_stack **b, t_oper move)
{
	if (move.ra <= move.rb)
	{
		move.rb -= move.ra;
		list_mapi_2_stacks(a, b, rr, move.ra);
		list_mapi_1_stack(b, rb, move.rb);
	}
	else
	{
		move.ra -= move.rb;
		list_mapi_2_stacks(b, a, rr, move.rb);
		list_mapi_1_stack(a, ra, move.ra);
	}
	pa(a, b);
}

void	juggl_2(t_stack **a, t_stack **b, t_oper move)
{
	list_mapi_1_stack(a, ra, move.ra);
	list_mapi_1_stack(b, rrb, move.rrb);
	pa(a, b);
}

void	juggl_3(t_stack **a, t_stack **b, t_oper move)
{
	list_mapi_1_stack(a, rra, move.rra);
	list_mapi_1_stack(b, rb, move.rb);
	pa(a, b);
}

void	juggl_4(t_stack **a, t_stack **b, t_oper move)
{
	if (move.rra <= move.rrb)
	{
		move.rrb -= move.rra;
		list_mapi_2_stacks(a, b, rrr, move.rra);
		list_mapi_1_stack(b, rrb, move.rrb);
	}
	else
	{
		move.rra -= move.rrb;
		list_mapi_2_stacks(a, b, rrr, move.rrb);
		list_mapi_1_stack(a, rra, move.rra);
	}
	pa(a, b);
}
