/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:01:08 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/04 18:47:50 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	x[] = "Bonjour ooo";
	char	to_find;

	to_find = 'j';
	printf("%s\n", strrchr(x, to_find));
	printf("%s", ft_strrchr(x, to_find));
}