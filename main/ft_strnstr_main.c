/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:22:12 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/04 18:47:40 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char 	x[] = "Bonjour jjj";
	char 	y[] = "jj";
	int		len;

	len = 10;
	printf("%s\n", strnstr(x, y, len));
	printf("%s", ft_strnstr(x, y, len));
}
