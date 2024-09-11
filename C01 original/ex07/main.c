/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:29:47 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/23 10:51:42 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size);

char	intochar(int x)
{
	char	letra;

	letra = x +48;
	return (letra);
}

void imp_array(int * ptr, int size)
{
	int cont = 1;
	char digito;
	while(cont <= size)
	{
		digito = intochar(*ptr);
		write(1, &digito, 1);
		ptr++;
		cont++;
	}
}


int	main(void)
{
	int array[10] = {0, 1, 2, 3, 5, 5, 6, 0, 8, 9};
	int* ptr;

	ptr = &array[0];
	imp_array(ptr, 10);
	write(1, "\n", 1);
	ptr = &array[0];
	ft_rev_int_tab(ptr, 10);
	imp_array(ptr, 10);
}
