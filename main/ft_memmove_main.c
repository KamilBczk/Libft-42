/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:17:51 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/04 18:46:15 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char dst[] = "Bonjour ma biche";
	char src[] = "xxx";
	ft_memmove(dst, src, 2);
	printf("%s", dst);
}
