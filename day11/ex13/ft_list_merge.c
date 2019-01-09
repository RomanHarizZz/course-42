
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list, t_list *begin_list2)
{
	t_list	*current;

	if (!begin_list || !*begin_list)
		*begin_list = begin_list2;
	else
	{
		current = *begin_list;
		while (current->next)
			current = current->next;
		current->next = begin_list2;
	}
}
