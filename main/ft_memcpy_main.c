/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbiczyk <kbiczyk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:43:14 by kbiczyk           #+#    #+#             */
/*   Updated: 2021/09/04 18:46:03 by kbiczyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char src[] = "Kamil123456";
	char dest[] = "dsbjasbdaksbdasjk";
	ft_memcpy(dest, src, 8);
	printf("%s", dest);
}
