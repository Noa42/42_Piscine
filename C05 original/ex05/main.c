/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 10:24:02 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/30 13:25:44 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 40000)
	{
		if (ft_sqrt(i) != 0)
			printf("i: %i, la raiz es: %i\n", i, ft_sqrt(i));
		i++;
	}
}
