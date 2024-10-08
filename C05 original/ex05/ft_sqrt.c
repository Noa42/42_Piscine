/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 10:23:59 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/30 13:22:09 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	num;

	i = nb / 2;
	num = nb;
	if (nb == 1)
		return (1);
	if (i > 46340)
		i = 46340;
	while (i > 0)
	{
		if ((i * i) == num)
			return (i);
		i--;
	}
	return (0);
}
