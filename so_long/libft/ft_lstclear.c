/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:29:46 by ezanette          #+#    #+#             */
/*   Updated: 2024/02/15 13:29:50 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*res;

	if (lst)
	{
		while (*lst)
		{
			res = (*lst)-> next;
			ft_lstdelone(*lst, del);
			(*lst) = res;
		}
	}
}
