/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:57:02 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/16 18:45:27 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int		p = 13;
	int		s = 10;
	int		*pp;
	int		*ps;

	pp = &p;
	ps = &s;

	printf("A: %i, B:%i \n", p, s);
	ft_ultimate_div_mod(pp, ps);
	printf("Ahora A: % i \n", p);
	printf("Ahora B: % i ", s);
}
