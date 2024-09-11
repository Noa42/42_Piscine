/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:56:15 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/19 20:31:43 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

const int	sizeint = 4;

int	*crear_puntero(void)
{
	int	*ptr;

	ptr = malloc(4 * sizeint);
	return (ptr);
}

int	chartoint(char c)
{
	int	i;
	int	valor;
	int	ascii;

	i = 0;
	valor = c;
	ascii = 48;
	if (valor >= 48 && valor <= 57)
	{
		while (i <= 10)
		{
			if (valor == ascii)
			{
				return (i);
			}
		i++;
		ascii++;
		}
	}
	return (11);
}

char	intochar(int x)
{
	char	letra;

	letra = x +48;
	return (letra);
}

void	imparray(int *array, int size)
{
	int		cont;
	char	digito;

	cont = 0;
	while (cont <= size - 1)
	{
		digito = intochar(array[cont]);
		write (1, &digito, 1);
		cont++;
	}
	write(1, "\n", 1);
}

void	guardar_arg(char *argv, int *ptr, int ini, int fin)
{
	char	digito;
	int		i;

	i = 0;
	while (ini <= fin)
	{
		digito = argv[ini];
		ptr[i] = chartoint(digito);
		ini += 2;
		i++;
	}
}

int	edificiosqueseven(int *ptr, int extremo)
{
	int	i;
	int	cont;
	int	max;

	cont = 0;
	max = 0;
	if (extremo == 0)
	{
		i = 0;
		while (i <= 4)
		{
			if (ptr[i] > max)
			{
				max = ptr[i];
				cont++;
			}
		i++;
		}
	}
	else if (extremo == 1)
	{
		i = 3;
		while (i >= 0)
		{
			if (ptr[i] > max)
			{
				max = ptr[i];
				cont++;
			}
			i--;
		}
	}
	return (cont);
}

int	repeticion(int	*ptr)
{
	int	x;
	int	i;
	int	j;

	x = 1;
	i = 0;
	while (i <= 3)
	{
		j = i + 1;
		while (j <= 3)
		{
			if (ptr[i] == ptr[j])
			{
				x = 0;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (x);
}

int	*columnas(int matrix[4][4], int col)
{
	int		i;
	int		j;
	int		*p;
	int		array[4];

	i = 0;
	j = 0;
	while (i <= 3)
	{
		array[j] = matrix[i][col];
		j++;
		i++;
	}
	p = &array[0];
	return (p);
}

void	rellenar(int matrix[4][4], int* prowleft, int* prowright, int* pcolup, int* pcoldown)
{
	int		i;
	int		j;
	int		*col;

	i = 0;
	j = 0;
	col = malloc(4 * sizeint);
	while (i <= 3)
	{
		while (j <= 3)
		{
			matrix[i][j] = 1;
			col = columnas(matrix, j);
			if (edificiosqueseven(matrix[i], 0) == prowleft[i]
				&& edificiosqueseven(matrix[i], 1) == prowright[i] 
				&& edificiosqueseven(col, 0) == pcolup[j] 
				&& edificiosqueseven(col, 1) == pcoldown[j] 
				&& repeticion(matrix[i]) == 1
				&& repeticion(col) == 1)
			{	
				j++;
				continue ;
			}
			matrix[i][j] = 2;
			col = columnas(matrix, j);
			if (edificiosqueseven(matrix[i], 0) == prowleft[i]
				&& edificiosqueseven(matrix[i], 1) == prowright[i] 
				&& edificiosqueseven(col, 0) == pcolup[j] 
				&& edificiosqueseven(col, 1) == pcoldown[j] 
				&& repeticion(matrix[i]) == 1
				&& repeticion(col) == 1)
			{
				j++;
				continue ;
			}
			matrix[i][j] = 3;
			col = columnas(matrix, j);
			if (edificiosqueseven(matrix[i], 0) == prowleft[i]
				&& edificiosqueseven(matrix[i], 1) == prowright[i] 
				&& edificiosqueseven(col, 0) == pcolup[j] 
				&& edificiosqueseven(col, 1) == pcoldown[j] 
				&& repeticion(matrix[i]) == 1
				&& repeticion(col) == 1)
			{
				j++;
				continue ;
			}
			matrix[i][j] = 4;
			col = columnas(matrix, j);
			if (edificiosqueseven(matrix[i], 0) == prowleft[i] 
				&& edificiosqueseven(matrix[i], 1) == prowright[i] 
				&& edificiosqueseven(col, 0) == pcolup[j] 
				&& edificiosqueseven(col, 1) == pcoldown[j] 
				&& repeticion(matrix[i]) == 1
				&& repeticion(col) == 1)
			{
				j++;
				continue ;
			}
			j++;
		}
		i++;
	}
}
