/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:03:39 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/30 15:54:34 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

char	*ft_strdup(char *src)
{
	char			*dest;
	unsigned int	i;

	i = 0;
	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	while (i <= ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
