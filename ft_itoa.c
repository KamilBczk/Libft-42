/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:20:35 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/10 14:21:58 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_putnbr_pa(int n, char *pa, int i)
{
	unsigned int	nbr;

	if (n < 0)
	{
		pa[0] = '-';
		nbr = (unsigned int)(n * -1);
	}
	else
		nbr = (unsigned int) n;
	if (nbr >= 10)
	{
		i--;
		ft_putnbr_pa(nbr / 10, pa, i);
		i++;
		ft_putnbr_pa(nbr % 10, pa, i);
	}
	else
		pa[i] = nbr + 48;
	pa[++i] = '\0';
	return (pa);
}

char	*ft_itoa(int n)
{
	int		len;
	int		n_modif;
	char	*pa;
	int		i;

	len = 0;
	n_modif = n;
	i = 0;
	if (n_modif == 0)
		len = 1;
	if (n_modif < 0)
	{
		n_modif *= -1;
		len++;
	}
	while (n_modif != 0)
	{
		n_modif /= 10;
		len++;
	}
	pa = malloc(sizeof(char) * (len + 1));
	if (pa == NULL)
		return (NULL);
	return (ft_putnbr_pa(n, pa, len - 1));
}
