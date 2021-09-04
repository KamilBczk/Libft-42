/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 20:22:09 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/04 18:45:56 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	s1[] = "abc";
	char	s2[] = "abc";
	int		nb_of_times;

	nb_of_times = 4;
	printf("%d\n", memcmp(s1, s2, nb_of_times));
	printf("%d", ft_memcmp(s1, s2, nb_of_times));
}
