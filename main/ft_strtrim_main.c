/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:24:45 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/04 18:48:11 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	x[] = "	Bonjour		";
	char	y[] = "	";
	char	*pa;

	pa = ft_strtrim(x, y);
	printf("\nMa fonction : .%s.", pa);
}
