/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:09:47 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/28 11:49:35 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_iterative_factorial(int nb);

int main(void)
{
	int i = -3;
	while (i <= 20)
	{
		printf("la i: %i ---factorial: %i\n", i, ft_iterative_factorial(i));
		i++;
	}
}
