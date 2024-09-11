/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:44:29 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/15 15:58:48 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char intochar(int x) 
{
	char letra = x +48;
	return(letra);
}
void	ft_putchar(char letra)
{
	write (1, &letra, 1);
}

int main (void)
{
	int n = 2;
	int array[n];
	int i = 0;
	while (i<n)
	{
		array[i]=0;
		char x = intochar(array[i]);
		i++;
	}
	array[n-1] = 1;
	int cont = n-1;
	while (cont <=n && cont >= 0)
	{
		while(array[cont]<=9)
		{	
			i=0;
			while (i<n && ((array[cont]>array[cont-1]) || cont != 0))
			{
				ft_putchar(intochar(array[i]));
				i++;
			}
			write(1, ", ", 2);
			array[cont]++;
		}
		array[cont]=0;
		cont--;
	}
	
	
}

/*int n = 2;
	int array[2] = {0,1};//guarda los digitos
	while (array[0]<=9)
	{
		while(array[1]<=9 && array[0]< array[1]) //1 =n-1 0 es n-2
			{
			ft_putchar(intochar(array[0]));
			ft_putchar(intochar(array[1]));
			write(1,", ",2);
			array[1]++;
			}
		array[0]++;
	}**/