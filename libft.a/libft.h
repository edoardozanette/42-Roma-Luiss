/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:32:38 by ezanette          #+#    #+#             */
/*   Updated: 2024/01/11 12:43:52 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H 
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_strncmp(const char *str1, const char *str2, size_t n);
int     ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
int	    ft_atoi(char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memchr(const void *ptr, int value, size_t n);
void    *ft_calloc(size_t num, size_t size)
char    *ft_strchr(const char *str, int character);
char	*ft_strrchr(const char *str, int character);
char	*ft_strnstr(const char *body, const char *to_find, size_t len);
char    *ft_strdup(const char *s);
#endif 