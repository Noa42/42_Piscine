/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:37:20 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/26 20:10:53 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	cont;

	cont = 0;
	while (*str != '\0')
	{
		str++;
		cont++;
	}
	return (cont);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dest);
	if (size == 0 || size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	else
	{
		while (src[i] != '\0' && (j + i) < size - 1)
		{
			dest[j + i] = src[i];
			i++;
		}
		dest[i + j] = '\0';
		return (ft_strlen(src) + j);
	}
}
