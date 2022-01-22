/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 00:31:15 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/17 21:34:04 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_delone(t_list *lst)
{
	if (lst)
		free(lst);
}

void	delete_list(t_list **lst)
{
	t_list	*tmp;

	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			lst_delone(*lst);
			*lst = tmp;
		}
	}
}

void	ft_free_array(char **array, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(*(array + i));
		i++;
	}
	free(array);
}
