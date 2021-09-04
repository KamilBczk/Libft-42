/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:49:51 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/04 18:47:35 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int nb_of_times;
	char x[] = "abc";
	char y[] = "abcd";

	nb_of_times = 4;
	printf("%d\n", strncmp(x, y, nb_of_times));
	printf("%d", ft_strncmp(x, y, nb_of_times));
}
