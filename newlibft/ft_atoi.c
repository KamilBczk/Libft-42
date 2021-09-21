/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:25:59 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/10 14:21:21 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					signe;
	unsigned long int	nb;

	signe = 1;
	nb = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 43 || *str == 45 || (*str >= 48 && *str <= 57))
	{
		if (*str == 45)
			signe = -1;
	}
	else
		return (0);
	if (!(*str >= 48 && *str <= 57))
		str++;
	while (*str >= 48 && *str <= 57 && *str != '\0')
	{
		nb = nb * 10 + (*str++ - '0');
		if (nb > 2147483647 && signe == 1)
			return (-1);
		if (nb > 2147483648 && signe == -1)
			return (0);
	}
	return (signe * nb);
}
