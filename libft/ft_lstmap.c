#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	if (newlst == NULL)
	{
		ft_lstdelone(newlst, del);
		return (NULL);
	}
	if (lst->next)
		newlst->next = ft_lstmap(lst->next, f, del);
	return (newlst);
}