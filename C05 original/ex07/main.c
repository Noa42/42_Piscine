/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:33:58 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/30 13:45:53 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	i = -3;
	while (i <= 20000)
	{
	printf("El siguiente primo de %i es %i\n", i, ft_find_next_prime(i));
	i++;
	}
}
