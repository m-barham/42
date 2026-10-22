/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 16:03:39 by mbarham           #+#    #+#             */
/*   Updated: 2026/10/02 18:10:01 by mbarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	int	*p;

	if (n == 0 || size == 0)
		return (malloc(1));
	if (n > SIZE_MAX / size)
		return (NULL);
	p = malloc(n * size);
	if (!p)
		return (NULL);
	ft_bzero(p, n * size);
	return (p);
}
