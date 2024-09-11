/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:01:33 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/30 12:49:11 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int i;
	int *array;
	int min;
	int max;
	int size;

	i = 0;
	min = 5;
	max = 14;
	array = 0;
	size = ft_ultimate_range(&array, min, max);
	while (i < (max - min))
	{
		printf("%i\n", array[i]);
		i++;
	}
	printf("El tamaño es %i", size);
}
