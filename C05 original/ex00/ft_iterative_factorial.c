/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:09:40 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/28 11:50:51 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		if (nb - 1 == 0)
		{
			break ;
		}
		factorial = factorial * (nb -1);
		nb --;
	}
	return (factorial);
}
