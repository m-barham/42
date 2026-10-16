/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 21:57:44 by mbarham           #+#    #+#             */
/*   Updated: 2026/10/05 19:55:02 by mbarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	size_t	j;
	size_t	size;

	size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	p = malloc(sizeof(char) * (size + 1));
	if (!p)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}

/*int main(void)
{
	char *r = "idk";
	char *r2 = "oafjpoafj";

	printf ("%s" , ft_strjoin(r,r2));
	return 0;
}*/
