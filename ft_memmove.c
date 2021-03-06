/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:17:51 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/21 13:11:03 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*pdst;
	char	*psrc;

	pdst = (char *)dst;
	psrc = (char *)src;
	if (dst == src)
		return (dst);
	if (psrc < pdst)
	{
		while (len--)
			*(pdst + len) = *(psrc + len);
		return (dst);
	}
	else
		while (len--)
			*pdst++ = *psrc++;
	return (dst);
}
