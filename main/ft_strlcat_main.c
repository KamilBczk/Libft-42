/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 17:44:28 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/04 18:47:14 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char x[100] = "Hello";
	char y[] = "Byedddd";
	int	dstsize;

	dstsize = 9;
	printf("F %lu\n", strlcat(x, y, dstsize));
	printf("F %s\n", x);
	char z[100] = "Hello";
	char w[] = "Byedddd";
	printf("\nF %lu\n", ft_strlcat(z, w, dstsize));
	printf("F %s\n", z);
}
