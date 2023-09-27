#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int lst_size;

	lst_size = 0;
	while (lst)
	{
		lst = lst->next;
		lst_size++;
	}
	return (lst_size);
}