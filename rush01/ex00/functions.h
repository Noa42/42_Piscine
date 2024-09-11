/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:06:51 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/19 20:08:04 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FUNCTIONS
#define _FUNCTIONS

int		*crear_puntero(void);
int		chartoint(char c);
char	intochar(int x);
void	imparray(int *array, int size);
void	guardar_arg(char *argv, int *ptr, int ini, int fin);
int		edificiosqueseven(int* ptr, int extremo);
int 	repeticion(int* ptr);
int		*columnas(int matrix[4][4], int col);
void	rellenar(int matrix[4][4], int* prowleft, int* prowright, int* pcolup, int* pcoldown);

#include "functions.c"
#endif