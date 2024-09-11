/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:33:18 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/30 16:38:28 by achacon-         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		tam;
	char	*final;

	tam = 0;
	i = 0;
	if (size <= 0)
		return ("");
	while (i < size)
	{
		tam = tam + ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	final = malloc((tam + size * (ft_strlen(sep))) * sizeof(char));
	while (i < size)
	{
		ft_strcat(final, strs[i]);
		if (i <= (size -2))
			ft_strcat(final, sep);
		i++;
	}
	final[tam + size * (ft_strlen(sep))] = '\0';
	return (final);
}
