/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:59:54 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/23 11:11:26 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);
int	ordenado(int *tab, int size);

char	intochar(int x)
{
	char	letra;

	letra = x +48;
	return (letra);
}

void imp_array(int * ptr, int size)
{
	int cont = 1;
	char digito;
	while(cont <= size)
	{
		digito = intochar(*ptr);
		write(1, &digito, 1);
		ptr++;
		cont++;
	}
}

int	main(void)
{	
	int array[5] = {1, 2, 3, 4, 4};
	int array2[5] = {1, 2, 3, 4, 5};
	int orden;

	orden = ordenado(array, 5);
	printf("Orden es %i\n", orden);

	orden = ordenado(array2, 5);
	printf("Orden es %i\n", orden);
	int array3[5] = {5, 8, 1, 3, 1};

	imp_array(array3, 5);
	ft_sort_int_tab(array3, 5);
	write(1, "\n", 1);
	imp_array(array3, 5);
}
