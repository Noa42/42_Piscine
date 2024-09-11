/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:39:56 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/23 13:12:25 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_putstr(char *str)
{
	int i;
	char letra;

	i = 0;
	while (str[i] != '\0')
	{
		letra = str[i];
		write (1, &letra, 1);
		i++;
	}
}

int main(void)
{
	char cadena[] = "Hola";
	char destino[] = "adios";
	char cadena1[] = "Hola";
	char destino1[] = "adios";

	ft_strncpy(destino, cadena, 2);
	ft_putstr(destino);
	write (1, "\n", 1);
	strncpy(destino1, cadena1, 2);
	ft_putstr(destino1);
}
