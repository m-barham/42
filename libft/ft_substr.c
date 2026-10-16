/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:10:44 by mbarham           #+#    #+#             */
/*   Updated: 2026/10/02 21:57:10 by mbarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	if (start > ft_strlen((char *)s))
		len = 0;
	else if (len > ft_strlen((char *)s) - start)
	{
		len = ft_strlen((char *)s) - start;
	}
	while (i < len)
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
