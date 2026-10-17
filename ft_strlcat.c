/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 20:42:59 by mbarham           #+#    #+#             */
/*   Updated: 2026/10/16 19:20:30 by mbarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_le;
	size_t	src_le;
	size_t	original_dst_le;

	dst_le = 0;
	src_le = ft_strlen(src);
	while (dst_le < size && dst[dst_le] !='\0')
		dst_le++;
	if (dst_le == size)
		return (src_le + size);
	original_dst_le = dst_le;
	while ((dst_le < (size - 1)) && *src != '\0')
	{
		dst[dst_le] = *src;
		src++;
		dst_le++;
	}
	dst[dst_le] = '\0';
	return (original_dst_le + src_le);
}
