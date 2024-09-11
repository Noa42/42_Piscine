/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:13:41 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/26 16:37:06 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char cad1[] = "Fuen";
	char cad2[] = "Fuego";
	int i = 0;
while (i <= 7)
	{
		printf("\ni %i:\n", i);
		printf("Libreria es %i\n", strncmp(cad1, cad2, i));
		printf("Código es %i\n", ft_strncmp(cad1, cad2, i));
		i++;
	}
}
