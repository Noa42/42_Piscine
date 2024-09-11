/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:07:03 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/26 15:49:49 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);
int	 main(void)
{
	char str1[20];
	char str2[20];
	char str3[20];
	char str4[20];
	
	strcpy (str1,"To be ");
	strcpy (str2,"123456");
	ft_strncat(str1, str2, 30);
	printf("Con mi codigo: %s\n", str1);

	strcpy (str3,"To be ");
	strcpy (str4,"or not to be");

	strncat(str3, str4, 10);
	printf("Con libreria: %s\n", str3);
}
/*
	char descad[] = "Primero ";
	char srccad[] = "Segundo.";
	char descad1[] = "Primero ";
	char srccad1[] = "Segundo.";
	ft_strncat(descad, srccad, 4);
	printf("Con mi codigo: %s\n", descad);
	strncat(descad1, srccad1, 4);
	printf("Con la libreria: %s\n", descad);
**/