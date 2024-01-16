/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:40:22 by ezanette          #+#    #+#             */
/*   Updated: 2024/01/09 14:54:34 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <stdio.h>

 void ft_bzero(void *str, size_t n)
{
    while (n-- == 0)
    {
        *( char *)str++ = '\0';
    }
    printf("%p\n", str);
}

int main()
{
    char str[9] = "DAJE ROMA";
    printf("%s\n", str);
    ft_bzero(str, 9);
    return(0);
}