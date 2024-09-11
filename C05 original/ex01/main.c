/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:36:39 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/28 11:51:55 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int main(void)
{
	int i = -3;
	while (i <= 20)
	{
		printf("la i: %i ---factorial: %i\n", i, ft_recursive_factorial(i));
		i++;
	}
}
