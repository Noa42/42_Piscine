/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 12:05:07 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/22 13:22:06 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	int		ascii;
	char	num;

	ascii = 48;
	i = 0;
	while (i < 10)
	{
		num = ascii;
		write(1, &num, 1);
		i++;
		ascii ++;
	}
}
