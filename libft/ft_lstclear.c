#include "libft.h"

/* Parameters lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.

Description Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	temp = *lst;
	while (temp)
	{
		temp = temp->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	lst = NULL;
}
