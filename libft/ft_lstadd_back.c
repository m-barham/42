/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 14:25:58 by mbarham           #+#    #+#             */
/*   Updated: 2026/10/10 14:37:06 by mbarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	last->next = new;
}

/*int main(void)
{
	t_list *lst;
	t_list *new;
	t_list	*node;

	lst = ft_lstnew("Hi");
	new = ft_lstnew("world");
	node = ft_lstnew("idk");

	ft_lstadd_front(&lst,new);
	ft_lstadd_back(&lst,node);
	while (lst)
	{
		printf("%s\n",(char *) lst->content);
		lst = lst->next;
	}
	return(0);
}*/
