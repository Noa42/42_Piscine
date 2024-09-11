/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:39:32 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/23 17:51:24 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	char	letra;

	letra = c;
	write (1, &c, 1);
}

void	imphexa(char c)
{
	char	*hexa;
	char	prim;
	char	seg;

	hexa = "0123456789abcdef";
	prim = hexa[c / 16];
	seg = hexa[c % 16];
	ft_putchar(prim);
	ft_putchar(seg);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write (1, "\\", 1);
			imphexa(str[i]);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
}
