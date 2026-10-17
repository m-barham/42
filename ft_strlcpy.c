/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 20:40:38 by mbarham           #+#    #+#             */
/*   Updated: 2026/10/16 19:20:56 by mbarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (dsize == 0)
		return (len);
	while (dsize > 1 && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
		dsize--;
	}
	*dst = '\0';
	return (len);
}
