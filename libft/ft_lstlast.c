/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 13:55:51 by mbarham           #+#    #+#             */
/*   Updated: 2026/10/10 14:25:36 by mbarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*int main(void)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;

	lst = ft_lstnew("fha");
	node1 = ft_lstnew("ajjf");
	node2 = ft_lstnew("ona");

	ft_lstadd_front(&lst, node1);
	ft_lstadd_front(&lst, node2);

	printf("%s",(char *)ft_lstlast(lst)->content);
	return (0);
}*/
