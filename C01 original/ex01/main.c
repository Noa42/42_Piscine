/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:27:02 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/16 13:40:28 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nb);

int	main(void)
{
	int x = 21;
	int* ptr1 = &x;
	int** ptr2 = &ptr1;
	int***ptr3 = &ptr2;
	int**** ptr4 = &ptr3;
	int***** ptr5= &ptr4;
	int****** ptr6= &ptr5;
	int******* ptr7= &ptr6;
	int******** ptr8= &ptr7;
	int********* ptr9= &ptr8;
	
	printf("Antes %i \n", x);
	ft_ultimate_ft(ptr9);
	printf("Despues %i \n", x);
}
