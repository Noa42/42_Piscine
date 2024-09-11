/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:15:28 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/30 10:42:18 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int i;
	int *array;
	int min;
	int max;

	i = 0;
	min = 4;
	max = 3;
	array = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%i\n", array[i]);
		i++;
	}
}
