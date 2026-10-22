/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:12:07 by mbarham           #+#    #+#             */
/*   Updated: 2026/10/09 19:18:39 by mbarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_p;
	unsigned char	*s2_p;

	s1_p = (unsigned char *)s1;
	s2_p = (unsigned char *)s2;
	while (n > 0)
	{
		if (*s2_p != *s1_p)
			return (*s1_p - *s2_p);
		s1_p++;
		s2_p++;
		n--;
	}
	return (0);
}
