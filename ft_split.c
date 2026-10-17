/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 13:07:30 by mbarham           #+#    #+#             */
/*   Updated: 2026/10/09 19:15:53 by mbarham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	size(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

void	free_split(char **s, size_t i)
{
	while (i > 0)
	{
		i--;
		free(s[i]);
	}
	free(s);
}

static	size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**fill_split(char const *s, char c, char **split)
{
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			len = word_len(s + i, c);
			split[j] = ft_substr(s, i, len);
			if (!split[j])
			{
				free_split(split, j);
				return (NULL);
			}
			j++;
			i += len;
		}
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (size(s, c) + 1));
	if (!split)
		return (NULL);
	split = fill_split(s, c, split);
	return (split);
}

/*int main(void)
{
	char *s;
	char c;
	char **tab;
	int i;

	s = "Hi word book";
	c = ' ';
	tab = ft_split(s,c);
	i = 0;
	while (tab && tab[i])
	{
		printf("%s\n", tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);

}*/