/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:29:01 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/10 09:17:16 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	x;

	x = c;
	while (*s != '\0' && *s != x)
		s++;
	if (*s == x)
		return ((char *) s);
	else if (!(*s == '\0'))
		return ((char *) s);
	return (NULL);
}
