/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 17:18:16 by mbarham           #+#    #+#             */
/*   Updated: 2026/10/16 17:52:32 by mbarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		p = ft_lstnew(lst->content);
		if (!p)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		p->content = f(lst->content);
		ft_lstadd_back(&new, p);
		lst = lst->next;
	}
	return (new);
}
