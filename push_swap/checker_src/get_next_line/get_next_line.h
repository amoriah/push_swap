/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:15:02 by amoriah           #+#    #+#             */
/*   Updated: 2022/01/16 22:21:27 by amoriah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_strdup0(char *str);
char	*ft_strjoin0(char const *s1, char const *s2);
char	*ft_substr0(char const *s, unsigned int start, size_t len);
size_t	ft_strlen0(const char *s);
void	*ft_calloc0(size_t count, size_t size);

#endif