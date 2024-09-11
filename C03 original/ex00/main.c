/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:13:41 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/26 14:12:33 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char cad1[] = "Fuego";
	char cad2[] = "Fego";

	printf("El resultado es %i\n", strcmp(cad1, cad2));
	printf("El resultado es %i\n", ft_strcmp(cad1, cad2));
}
