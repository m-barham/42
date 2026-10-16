/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 16:56:31 by mbarham           #+#    #+#             */
/*   Updated: 2026/10/02 18:06:44 by mbarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	len;

	len = ft_strlen(s);
	p = s;
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	ft_memcpy(p, s, len + 1);
	return (s);
}
