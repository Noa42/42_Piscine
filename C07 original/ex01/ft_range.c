/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:15:11 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/30 16:28:22 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	num;

	i = 0;
	num = min;
	if (min >= max)
		return (0);
	array = malloc((max - min) * sizeof(int));
	while (i < (max - min))
	{
	array[i] = num;
	num++;
	i++;
	}
	return (array);
}
