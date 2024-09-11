/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:37:26 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/25 20:04:55 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> // no está acabado
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char cad1[50] = "abcd";
	char cad2[50] = "123456789";
	char cadA[50] = "abcd";
	char cadB[50] = "123456789";
	int x;

	x = strlcat(cad1, cad2, 7);
	printf("Librería: %s, x: %i\n", cad1, x);
	x = ft_strlcat(cadA, cadB, 7);
	printf("Mi funcion: %s, x: %i\n", cadA, x);
}
