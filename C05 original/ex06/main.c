/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 10:59:36 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/28 20:20:42 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	i;

	i = -4;
	while (i <= 100)
	{
		printf("numero:%i es %i\n", i, ft_is_prime(i));
	i++;
	}
}
