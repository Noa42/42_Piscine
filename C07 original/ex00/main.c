/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:03:36 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/30 10:10:09 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		else
		{
			str[i] = str[i];
		}
		i++;
	}
	return (str);
}

char	*ft_strdup(char *src);

int	main(void)
{
	char cad[] = "Hola que tal estas";
	char *copy;
	
	copy = ft_strdup(cad);
	printf("Copia1: %s\n", copy);
	ft_strupcase(cad);
	printf("Copia: %s\n", copy);
	printf("Original: %s\n", cad);
}
