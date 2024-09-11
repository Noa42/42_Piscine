/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:19:06 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/20 17:11:57 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	ascii;
	int	resultado;

	resultado = 1;
	i = 0;
	while (str[i] != '\0')
	{
		ascii = str[i];
		if (ascii < 97 || ascii > 122)
		{
			resultado = 0;
		}
		i++;
	}
	return (resultado);
}
