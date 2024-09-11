/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:22:58 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/28 12:13:13 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resultado;

	resultado = 1;
	if (power < 0)
		return (0);
	while (power >= 1)
	{
		resultado = nb * resultado;
		power --;
	}
	return (resultado);
}
