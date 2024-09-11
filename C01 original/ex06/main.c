/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:21:29 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/16 19:27:34 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strlen(char *str);

int	main(void)
{
	char* cadena = "Zorro";
	printf("La palabra %s tiene %i caracteres", cadena, ft_strlen(cadena));
}
