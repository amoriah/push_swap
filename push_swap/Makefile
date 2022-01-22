# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 20:07:27 by amoriah           #+#    #+#              #
#    Updated: 2022/01/14 20:07:27 by amoriah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
NAME_B		=	checker

SRCS		=	push_swap.c			swap.c sorting.c			sorting_three.c rotate.c\
				push.c				print_last_back.c			max_min.c\
				juggling.c			free.c						count_len.c\
				checks.c			fill_a.c					fill_b.c list_mapi.c\
				reverse_rotate.c	check_memory.c\

CHECKER_DIR =	./checker_src/

BNS			=	checker.c			swap_copy.c					push_copy.c\
				rotate_copy.c		../checks.c					../check_memory.c\
				fill_a_copy.c		../count_len.c				../print_last_back.c\
				../free.c				../max_min.c			checker_read_str.c\
				reverse_rotate_copy.c\
				get_next_line/get_next_line.c\
				get_next_line/get_next_line_utils.c\

LIB			=	./libft/libft.a

HEADER		=	push_swap.h ./libft/libft.h

RM			=	rm -f
		
OBJS		=	$(SRCS:.c=.o)

BOBJS		=	$(addprefix $(CHECKER_DIR), $(BNS:.c=.o))

GCC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

$(NAME):		$(OBJS) $(HEADER)
				@$(MAKE) -C ./libft
				@$(GCC) $(CFLAGS) $(OBJS) $(LIB) -o ${NAME}
				@echo The push swap has been compiled 👏
				@say -v Milena все в порядке дорогуша

%.o			:	%.c $(HEADER)
				@$(GCC) $(CFLAGS) -c $< -o $@


bonus:			$(BOBJS) $(HEADER) checker_src/get_next_line/get_next_line.h
				@$(MAKE) -C ./libft
				@ $(GCC) $(CFLAGS) $(BOBJS) $(LIB) -o ${NAME_B}

all:			$(NAME)

clean:
				@$(RM) $(OBJS) $(BOBJS)
				@$(MAKE) clean -C ./libft
				@echo Obj files has been removed 🤭
				@say -v Milena дарагой мой друг ты удалил мне все файлы

fclean:			clean
				@$(RM) $(NAME) checker ../libft/libft.a
			
re:				fclean all

.PHONY:			all clean  re
