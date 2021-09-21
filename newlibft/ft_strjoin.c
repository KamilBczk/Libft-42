/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:13:33 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/10 13:52:21 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s1len;
	int		s2len;
	char	*pa;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen((char *)s1);
	s2len = ft_strlen((char *)s2);
	pa = malloc(sizeof(char) * (s1len + s2len + 1));
	if (!pa)
		return (NULL);
	while (*s1 != '\0')
	{
		pa[i++] = *s1;
		s1++;
	}
	while (*s2 != '\0')
	{
		pa[i++] = *s2;
		s2++;
	}
	pa[i] = '\0';
	return (pa);
}
