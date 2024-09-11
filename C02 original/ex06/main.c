/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:19:03 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/23 13:31:31 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_str_is_printable(char *str);

int main(void)
{
	char *cadena1;
	char *cadena2;
	int cad1;
	int cad2;

	cadena1 = "";
	cadena2 = "Hola";
	cad1 = ft_str_is_printable(cadena1);
	cad2 = ft_str_is_printable(cadena2);
	printf("Cadena 1: %i\n", cad1);
	printf("Cadena 2: %i\n", cad2);
}
