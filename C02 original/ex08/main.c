/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:23:23 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/22 10:48:10 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	char	cadena[] = "hola Hola!"; ///igual deberia cambiar a esta nomenclatur en el resto
	printf("Antes: %s\n", cadena);
	ft_strlowcase(cadena);
	printf("Despues: %s\n", cadena);
}
