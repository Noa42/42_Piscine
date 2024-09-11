/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:19:03 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/22 10:39:57 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_str_is_numeric(char *str);

int main(void)
{
	char *cadena1;
	char *cadena2;
	int cad1;
	int cad2;

	cadena1 = "Hola3";
	cadena2 = "345";
	cad1 = ft_str_is_numeric(cadena1);
	cad2 = ft_str_is_numeric(cadena2);
	printf("Cadena1: %i\n", cad1);
	printf("Cadena 2: %i\n", cad2);
}
