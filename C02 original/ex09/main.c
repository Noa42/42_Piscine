/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:52:17 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/25 15:14:24 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strcapitalize(char *str);
int main(void) 
{
	char cadena[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Antes: %s\n", cadena);
	ft_strcapitalize(cadena);
	printf("Despues: %s", cadena);
}
