/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:01:50 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/16 19:12:07 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_putstr(char *str);

int	main(void)
{
	char* cadena = "Supercalifragisticoespialidoso";
	printf("printf: %s\n", cadena);
	ft_putstr(cadena);
}