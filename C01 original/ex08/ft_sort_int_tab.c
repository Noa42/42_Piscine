/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:02:56 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/23 11:13:35 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	var_aux;

	var_aux = *a;
	*a = *b;
	*b = var_aux;
}

int	ordenado(int *tab, int size)
{
	int	i;
	int	j;
	int	ordenado;

	i = 0;
	ordenado = 1;
	while (i <= size - 1)
	{
		j = i + 1;
		while (j <= size - 1)
		{
			if (tab[i] >= tab[j])
			{
				ordenado = 0;
				break ;
			}
			j++;
		}
		i++;
	}
	return (ordenado);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	orden;

	i = 0;
	j = 0;
	orden = ordenado(tab, size);
	while (i <= size - 1 && orden == 0)
	{
		orden = ordenado(tab, size);
		j = 0;
		while (j <= size -1)
		{
			if (tab[i] < tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
		j = 0;
		orden = ordenado(tab, size);
	}
}
