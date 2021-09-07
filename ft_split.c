/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:59:13 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/08 00:46:01 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_number_table(char const *s, char c)
{
	int		i;
	int		total;
	int		pos;

	i = 0;
	total = 0;
	pos = 1;
	if (s[i] == '\0')
		return (1);
	while (s[i] != '\0')
	{
		if (s[i] == c && pos == 1)
		{
			total++;
			pos = 0;
		}
		if (s[i] != c)
			pos = 1;
		i++;
	}
	if (pos == 0)
		return (total + 1);
	return (total + 2);
}

char	**ft_alloc_table(char **pa, char const *s, char c, int numberelem)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i != numberelem - 1)
	{
		while (s[j] != c && s[j] != '\0')
		{
			k++;
			j++;
		}
		pa[i] = malloc(sizeof(char) * k);
		if (!pa[i])
			return (NULL);
		while (s[j] == c && s[j] != '\0')
			j++;
		i++;
		k = 0;
	}
	pa[i] = malloc(sizeof(*(pa[k])) * k + 1);
	return (pa);
}

char	**ft_fill_table(char **pa, char const *s, char c, int numberelem)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i != numberelem - 1)
	{
		while (s[j] != c && s[j] != '\0')
		{
			pa[i][k] = (char) s[j];
			k++;
			j++;
		}
		pa[i][k] = '\0';
		if (!pa[i])
			return (NULL);
		while (s[j] == c && s[j] != '\0')
			j++;
		i++;
		k = 0;
	}
	pa[i] = NULL;
	return (pa);
}

char	**ft_split(char const *s, char c)
{
	char	**pa;

	if (!s)
		return (NULL);
	while (*s == c && *s != '\0')
		s++;
	pa = malloc(sizeof(*pa) * (ft_number_table(s, c)));
	if (!pa)
		return (NULL);
	pa = ft_alloc_table(pa, s, c, ft_number_table(s, c));
	pa = ft_fill_table(pa, s, c, ft_number_table(s, c));
	return (pa);
}
