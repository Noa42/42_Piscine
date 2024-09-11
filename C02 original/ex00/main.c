/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:15:26 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/23 13:04:23 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

void	ft_putstr(char *str)
{
	int i;
	char letra;

	i = 0;
	while (str[i] != '\0')
	{
		letra = str[i];
		write (1, &letra, 1);
		i++;
	}
}

int	main(void)
{
	char	src[] = "Hola!";
	char	dest[] = "adios";
	char	src1[] = "Hola!";
	char	dest1[] = "adios";

	strcpy(dest1, src1);
	ft_putstr(dest1);
	ft_strcpy(dest, src);
	ft_putstr(dest);

}
