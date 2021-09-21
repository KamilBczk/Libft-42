/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:01:08 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/21 13:29:02 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	n;

	if (!s)
		return (NULL);
	n = ft_strlen(s);
	while (s[n] != (char) c && n > 0)
		n--;
	if (s[n] == (char) c)
		return ((char *)s + n);
	return (0);
}
