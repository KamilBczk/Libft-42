/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:24:45 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/21 13:11:33 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_str_begin(char *s, char *set, int i)
{
	int	f;
	int	pos;

	pos = -1;
	f = 0;
	while (s[i] != '\0')
	{
		while (set[f] != '\0')
		{
			if (s[i] == set[f])
				pos = i;
			f++;
		}
		if (!(pos == i))
			return (pos + 1);
		f = 0;
		i++;
	}
	return (i);
}

static int	check_str_end(char *s, char *set, int i)
{
	int	f;
	int	pos;
	int	i_init;

	pos = i;
	f = 0;
	i_init = i;
	i--;
	while (i >= 0)
	{
		while (set[f] != '\0')
		{
			if (s[i] == set[f])
				pos = i;
			f++;
		}
		if (!(pos == i))
			return (i_init - pos);
		f = 0;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		begin_trim;
	int		end_trim;
	int		s1len;
	char	*pa;

	if (!s1)
		return (NULL);
	s1len = ft_strlen(s1);
	begin_trim = check_str_begin((char *)s1, (char *) set, 0);
	end_trim = check_str_end((char *)s1, (char *) set, s1len);
	s1len -= begin_trim + end_trim;
	i = 0;
	pa = malloc(sizeof(char) * (s1len + 1));
	if (pa == NULL)
		return (NULL);
	while (i < s1len)
		pa[i++] = s1[begin_trim++];
	pa[i] = '\0';
	return (pa);
}
