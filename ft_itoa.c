/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 21:22:45 by mbarham           #+#    #+#             */
/*   Updated: 2026/10/05 22:03:27 by mbarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_len(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*p;
	size_t	i;

	i = num_len(n) + 1;
	p = malloc(sizeof(char) * i);
	if (!p)
		return (NULL);
	p[i--] = '\0';
	if (n < 0)
	{
		p[0] = '-';
		n = -n;
	}
	if (n == 0)
		p[0] = '0';
	while (n > 0)
	{
		p[--i] = n % 10 + '0';
		n /= 10;
	}
	return (p);
}
/*nt main(void)
{
	int num = -0;
	printf("%s" , ft_itoa(num));
}*/