/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:21:08 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/22 13:40:43 by achacon-         ###   ########.fr       */
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

int	num_cifras(int n)
{
	int	cifra;
	int	copy;

	cifra = 0;
	copy = n;
	while (copy % 10 > 0)
	{
		cifra++;
		copy = copy / 10;
	}
	return (cifra);
}

void	ft_putnbr(int nb)
{
	char			char_print;
	int				num_print;
	unsigned int	diez;
	unsigned int	nb_1;

	diez = 10;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	nb_1 = nb;
	if (num_cifras(nb_1) > 1)
	{
		ft_putnbr(nb_1 / diez);
	}
	num_print = nb_1 % diez;
	char_print = intochar(num_print);
	ft_putchar(char_print);
}
