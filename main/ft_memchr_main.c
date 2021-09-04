/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 20:03:07 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/04 18:45:50 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char 	x[] = "BonjourAAA";
	int		c;
	int		n;

	c = 'j';
	n = 4;
	printf("%s\n", memchr(x, c, n));
	printf("%s\n", ft_memchr(x, c, n));
}
