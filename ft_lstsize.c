/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 13:42:25 by mbarham           #+#    #+#             */
/*   Updated: 2026/10/10 13:53:40 by mbarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
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

	printf("%d",ft_lstsize(lst));
	return (0);
}*/