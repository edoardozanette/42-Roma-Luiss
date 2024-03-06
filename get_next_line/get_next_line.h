/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:01:42 by ezanette          #+#    #+#             */
/*   Updated: 2024/03/06 18:29:02 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20
# endif

# include <unistd.h>
# include <stdlib.h>
# include <strings.h>
# include <fcntl.h>
# include <stdio.h>

char    *get_next_line(int fd);
char	*ft_strchr(const char *str, int character);
char	*ft_realloc(char *line);
char	*ft_calloc(size_t num, size_t size);
void	bufcat(char *dest, char *src);
int 	isempty(char *buffer);
size_t	ft_strlen(const char *s);
#endif