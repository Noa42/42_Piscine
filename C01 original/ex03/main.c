/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:29:57 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/16 17:53:08 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{	
	int 	x;
	int 	y;
	int		*division;
	int		*modulo;
	division = &x;
	modulo = &y;
	int		p = 13;
	int		s = 10;

	ft_div_mod(p, s, division, modulo);
	printf("La division entre %i y %i da como resultado: %i, el verdadero es %i \n", p, s, x, p / s);
	printf("El modulo entre %i y %i da como resultado: %i, el verdadero es %i", p, s, y, p % s);
}
