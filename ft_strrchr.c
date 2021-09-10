/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:01:08 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/10 09:14:56 by kbiczyk          ###   ########.fr       */
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
