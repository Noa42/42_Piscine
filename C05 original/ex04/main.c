/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:44:03 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/28 12:27:29 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	i;

	i = -3;
	while (i <= 40)
	{
		printf("i: %i -- %i\n", i, ft_fibonacci(i));
		i++;
	}
}
