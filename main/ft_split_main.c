/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamilbiczyk <kamilbiczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 00:59:44 by kamilbiczyk       #+#    #+#             */
/*   Updated: 2021/09/08 00:59:47 by kamilbiczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
 {
 	char x[] = "tripouille";
 	char y = 0;
 	char **pa;

 	pa = ft_split(x, y);
 	printf("%s", pa[1]);
 	printf("%d", strcmp(pa[0], "tripouille"));
 }