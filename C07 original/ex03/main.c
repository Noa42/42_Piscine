/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:33:22 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/30 16:18:11 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strjoin(int size, char **strs, char *sep);
int main(void)
{
	char *array[4];
	char *resultado;

	array[0] = "Hola churra";
	array[1] = "como demonios";
	array[2] = "estamos";
	array[3] = "?";
	resultado = ft_strjoin(0, array, "-");
	printf("%s", resultado);
}
