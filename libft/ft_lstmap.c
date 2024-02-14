
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*res;

	if (!lst || !f || !del)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (0);
	res = new;
	lst = lst -> next;
	while (lst)
	{
		new -> next = ft_lstnew(f(lst -> content));
		if (!new -> next)
		{
			ft_lstclear(&res, del);
			return (0);
		}
		new = new -> next;
		lst = lst -> next;
	}
	new -> next = NULL;
	return (res);
}
