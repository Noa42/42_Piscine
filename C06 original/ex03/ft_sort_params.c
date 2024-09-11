/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:02:52 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/29 19:18:13 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(char **a, char **b)
{
	char	*cad_aux;

	cad_aux = *a;
	*a = *b;
	*b = cad_aux;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int		i;
	char	letra;

	i = 0;
	while (str[i] != '\0')
	{
		letra = str[i];
		write (1, &letra, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc)
		{
			while (ft_strcmp(argv[i], argv[j]) < 0)
			{
				ft_swap(&argv[i], &argv[j]);
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i++;
	}
}
