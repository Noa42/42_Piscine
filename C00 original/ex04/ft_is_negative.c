/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 12:05:07 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/15 19:17:14 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negativo;
	char	positivo;

	negativo = 'N';
	positivo = 'P';
	if (n < 0)
		write(1, &negativo, 1);
	else
		write(1, &positivo, 1);
}
