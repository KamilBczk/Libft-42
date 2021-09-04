/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:29:01 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/04 18:46:57 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	x[] = "Bonjour ooo";
	char	to_find;

	to_find = 'o';
	printf("%s\n", strchr(x, to_find));
	printf("%s", ft_strchr(x, to_find));
}
