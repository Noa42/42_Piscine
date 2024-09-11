/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:07:03 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/25 17:24:49 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);
int	 main(void)
{
	char str1[1020];
	char str2[100];
	char str3[100];
	char str4[100];
	
	strcpy (str1,"To be ");
	strcpy (str2,"123456igihoñouñ");
	ft_strcat(str1, str2);
	printf("Con mi codigo: %s\n", str1);

	strcpy (str3,"To be ");
	strcpy (str4,"or not to be wapiyei ji hey");

	strcat(str3, str4);
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