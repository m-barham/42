/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 21:21:39 by mbarham           #+#    #+#             */
/*   Updated: 2026/10/16 19:27:30 by mbarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;

	slen = ft_strlen(s);
	while (slen > 0)
	{
		if (s[slen] == (char)c)
			return ((char *)&s[slen]);
		slen--;
	}
	if (s[0] == (char)c)
		return ((char *)&s[slen]);
	return (NULL);
}
