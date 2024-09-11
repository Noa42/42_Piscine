/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:01:30 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/30 16:26:12 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	num;
	int	*array;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	num = min;
	array = malloc((max - min) * sizeof(int));
	while (i <= (max - min))
	{
		array[i] = num;
		num ++;
		i++;
	}
	*range = array;
	return ((max - min));
}
