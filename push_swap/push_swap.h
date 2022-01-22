/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:56:20 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/18 13:52:20 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define ERR_NO_NUMBERS	"Error: there is(are) character(s)"
# define ERR_YES_DUBL	"Error: there is(are) dublicate(s)"
# define ERR_NO_ARGV	"Error: failed to calculate the length of the args"
# define ERR_NO_MALLOC	"Error: failed to allocate memory"
# define ERR_NO_MALLOC	"Error: failed to allocate memory"
# define ERR_BAD_INT	"Error: your integer is too big or too small"

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "libft/libft.h"
# include "checker_src/get_next_line/get_next_line.h"

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}				t_list;

typedef struct s_stack
{
	t_list	*head;
	int		min;
	int		max;
	int		len;
}				t_stack;

typedef struct s_oper
{
	int	ra;
	int	rra;
	int	rb;
	int	rrb;
	int	m1;
	int	m2;
	int	m3;
	int	m4;
}				t_oper;

//count_len.c
int		len_arr(char **array);
int		size_array(char **av);
//checks.c
void	is_dublicate(t_list *stack);
void	check_alloc(t_stack **stack);
void	check_int_arr(int *int_arr);
void	check_alloc_list(t_list *list);
int		ft_isnum(char *str);
int		check_sorting(t_list *head);
//print_last_back.c
void	push_back(t_list *head, int value);
t_list	*get_last(t_list *head);
t_list	*get_penultimate(t_list *head);
//free.c
void	delete_list(t_list **head);
void	ft_free_array(char **array, int len);
void	pop(t_stack **head);
//fill_a.c fill_a_copy.c 
t_stack	*fill_the_stack_a(t_stack *a, char **av, int size_arr);
t_stack	*fill_the_stack_a1(t_stack *a, char **av, int size_arr);
//fill_b.c fill_b_copy.c 
t_stack	*fill_the_stack_b(t_stack **a, int size);
t_stack	*fill_the_stack_b1(t_stack **a, int size);
//sorting_three.c && sorting.c
void	do_swap2_part2(t_stack *a, t_stack *b);
void	do_swap2(t_stack *a, t_stack *b);
void	sorting_three1(t_stack **a);
void	sorting(t_stack **b, t_stack **a);
void	sorting_three(t_stack **a, t_stack **b);
int		pos_in_a(t_stack *stack, int elem);
int		position_elem(t_stack *stack, int elem);
t_oper	count_min_oper(t_stack *a, t_stack *b);
t_oper	count_oper(int pos_a, int pos_b, int len_a, int len_b);
//joggling.c
void	juggl_1(t_stack **a, t_stack **b, t_oper move);
void	juggl_2(t_stack **a, t_stack **b, t_oper move);
void	juggl_3(t_stack **a, t_stack **b, t_oper move);
void	juggl_4(t_stack **a, t_stack **b, t_oper move);
//max_min.c
void	new_min_amd_max(t_stack **a);
int		ft_max(int a, int b);
int		ft_min(int a, int b);
//swap.c
void	sa(t_list *a);
void	sb(t_list *b);
void	ss(t_list *a, t_list *b);
//swap_copy.c
void	sa1(t_list *a);
void	sb1(t_list *b);
void	ss1(t_list *a, t_list *b);
//rotate.c
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
//reverse_rotate.c
void	rrb(t_stack **b);
void	rra(t_stack **a);
void	rrr(t_stack **a, t_stack **b);
//rotate_copy.c
void	rb1(t_stack **b);
void	ra1(t_stack **a);
void	rr1(t_stack **a, t_stack **b);
//reverse_rotate_copy.c
void	rra1(t_stack **a);
void	rrb1(t_stack **b);
void	rrr1(t_stack **a, t_stack **b);
//push.c
void	pb(t_stack **b, t_stack **a);
void	pa(t_stack **a, t_stack **b);
//push_copy.c
void	pb1(t_stack **b, t_stack **a);
void	pa1(t_stack **a, t_stack **b);
//list_mapi.c
void	list_mapi_1_stack(t_stack **stack, void (*f)(t_stack **), int n);
void	list_mapi_2_stacks(t_stack **stack1,
			t_stack **stack2, void (*f)(t_stack **, t_stack **), int n);
//checker_read_str.c
void	swap(t_stack **a, t_stack **b, char *oper);
void	psh(t_stack **a, t_stack **b, char *oper);
void	rotate(t_stack **a, t_stack **b, char *oper);

#endif