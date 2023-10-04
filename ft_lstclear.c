#include "libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    if (!lst || !del)
        return ;
    while (*lst)
    {
        temp = *lst;
        *lst = (*lst)->next;
        ft_lstdelone(temp, del);
    }
    temp = NULL;
}