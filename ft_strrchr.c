/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:01:08 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/08 00:11:24 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	x;

	i = ft_strlen(s) - 1;
	x = c;
	if (!s[0])
		return (NULL);
	if (s[i + 1] == c)
		return ((char *) s + i + 1);
	while (i != 0 && s[i] != x)
		i--;
	if (s[i] == x)
		return ((char *) s + i);
	return (NULL);
}
