/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 19:55:26 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/19 20:41:49 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "functions.h"

int	main(int argc, char *argv[])
{
	char	*pargv;
	int		*pcolup;
	int		*pcoldown;
	int		*prowleft;
	int		*prowright;
	int 	*fila1;
	int 	*fila2;
	int		*fila3;
	int		*fila4;
	int matrix[4][4] = {{1, 2, 3, 4}, {2, 3, 4, 1}, {3, 4, 1, 2}, {4, 1, 2, 3}};

	pargv = argv[1];
	pcolup = crear_puntero();
	pcoldown = crear_puntero();
	prowleft = crear_puntero();
	prowright = crear_puntero();
	guardar_arg(pargv, pcolup, 0, 6);
	guardar_arg(pargv, pcoldown, 8, 14);
	guardar_arg(pargv, prowleft, 16, 22);
	guardar_arg(pargv, prowright, 24, 30);
	printf("Estos son los argumentos de entrada: \n");
	printf("Estos son los colup:\n");
	imparray(pcolup, 4);
	printf("Estos son los coldown:\n");
	imparray(pcoldown, 4);
	printf("Estos son los rowleft:\n");
	imparray(prowleft, 4);
	printf("Estos son los rowright:\n");
	imparray(prowright, 4);
	write(1, "\n", 1);
	printf("Esta es la matriz inicial declarada por nosotros:\n");
	imparray(matrix[0], 4);
	imparray(matrix[1], 4);
	imparray(matrix[2], 4);
	imparray(matrix[3], 4);
	write(1, "\n", 1);
	rellenar(matrix, prowleft, prowright, pcolup, pcoldown);
	printf("Esta es la matrix que nos genera tras una iteraccion de nuestra funcion de relleno\n");
	imparray(matrix[0], 4);
	imparray(matrix[1], 4);
	imparray(matrix[2], 4);
	imparray(matrix[3], 4);
	write(1, "\n", 1);
	free(pcolup);
	free(pcoldown);
	free(prowleft);
	free(prowright);
	return (0);
}
