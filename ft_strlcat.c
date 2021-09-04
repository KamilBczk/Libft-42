/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 17:44:28 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/04 14:57:45 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	f;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = dstlen;
	f = 0;
	if ((int)dstsize <= -1)
	{
		while (srclen-- != 0)
			dst[i + srclen] = src[srclen];
		return (ft_strlen(dst));
	}
	if (!(dstlen >= dstsize))
	{
		while (dstsize - 1 > i)
			dst[i++] = src[f++];
		dst[i] = '\0';
		return (dstlen + srclen);
	}
	return (dstsize + srclen);
}
