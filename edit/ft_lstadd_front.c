/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 20:28:47 by mbarham           #+#    #+#             */
/*   Updated: 2026/10/16 18:50:56 by mbarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int main(void)
{
	t_list *lst;
	t_list *new;
	lst = ft_lstnew("Hi");
	new = ft_lstnew("world");
	
	ft_lstadd_front(&lst,new);
	while (lst)
	{
		printf("%s\n",(char *) lst->content);
		lst = lst->next;
	}
	return(0);
}*/