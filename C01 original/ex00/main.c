/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:14:03 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/23 10:24:16 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int*nbr);

int	main(void)
{
	int	x;
	int	*ptr;

	x = 10;
	ptr = &x;
	ft_ft(ptr);
	printf("El valor del puntero es %i", *ptr);
}
