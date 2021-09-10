/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 17:29:42 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/10 11:24:20 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*pa;

	i = 0;
	while (s1[i] != '\0')
		i++;
	pa = malloc(sizeof(char) * i + 1);
	if (pa == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		pa[i] = s1[i];
		i++;
	}
	pa[i] = '\0';
	return (pa);
}
