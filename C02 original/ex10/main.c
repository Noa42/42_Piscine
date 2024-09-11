/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:59:39 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/25 15:21:24 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int n;
	char cadena[2000] = "Atrozweeyjhv";
	char cadena2[2000] = "holajhcvsdjvjchv";

	char cadenaa[2000] = "Atrozjhcwgfg";
	char cadenab[2000] = "holawgcig";

	n = ft_strlcpy(cadena2, cadena, 1010);
	printf("%s --- devuelve %i\n", cadena2, n);
	n = strlcpy(cadenab, cadenaa, 1010);
	printf("%s --- devuelve %i", cadenab, n);
}
