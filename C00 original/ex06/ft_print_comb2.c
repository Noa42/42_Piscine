/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:24:33 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/15 17:37:28 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	intochar(int x)
{
	char	letra;

	letra = x +48;
	return (letra);
}

void	ft_putchar(char letra)
{
	write (1, &letra, 1);
}

void	imp_pair(int n)
{
	char	a;
	char	b;

	a = intochar(n / 10);
	b = intochar(n % 10);
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_print_comb2(void)
{
	int	pair1;
	int	pair2;

	pair1 = 0;
	pair2 = 1;
	while (pair1 <= 99)
	{
		pair2 = pair1 + 1;
		while (pair2 <= 99 && pair1 < pair2)
		{
			imp_pair(pair1);
			write(1, " ", 1);
			imp_pair(pair2);
			if (pair1 != 98 || pair2 != 99)
			{
				write(1, ", ", 2);
			}
				pair2++;
		}
		pair1++;
	}
}
