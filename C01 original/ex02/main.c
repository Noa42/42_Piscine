/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:10:01 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/16 18:58:23 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_swap(int *a, int *b);
int main(void)
{
	int x = 3;
	int y = 8;
	int* px;
	int* py;
	
	px = &x;
	py = &y;
	printf("Antes x: %i, y: %i \n", x, y);
	ft_swap(px, py);
	printf("Despues x: %i, y: %i", x, y);
}