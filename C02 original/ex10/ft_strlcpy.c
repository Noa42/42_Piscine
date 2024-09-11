/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:59:42 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/25 18:17:33 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	cont;

	i = 0;
	cont = 0;
	while (src[i] != '\0')
	{
		i++;
		cont ++;
	}
	i = 0;
	while ((i < size - 1 && i < cont - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
	dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (cont);
}
