/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 12:05:07 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/15 17:25:29 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letra)
{
	write (1, &letra, 1);
}

char	intochar(int x)
{
	char	letra;

	letra = x +48;
	return (letra);
}

void	imp_trip(int ult, int prim, int seg, int ter)
{	
	if ((prim < seg && seg < ter))
	{
		ft_putchar(intochar(prim));
		ft_putchar(intochar(seg));
		ft_putchar(intochar(ter));
		if (ult == 0)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int	array[4];

	array[0] = 0;
	array[1] = 0;
	array[2] = 0;
	array[3] = 0;
	while (array[1] <= 9)
	{
		while (array[2] <= 9)
		{
			while (array[3] <= 9)
			{
				if (array[1] == 7 && array[2] == 8 && array[3] == 9)
				{
						array[0] = 1;
				}
				imp_trip(array[0], array[1], array[2], array[3]);
					array[3]++;
			}
		array[3] = 0;
		array[2]++;
		}
	array[2] = 0;
	array[1]++;
	}
}
