/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:06:14 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/27 16:06:47 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	espacios(char *str)
{
	int	i;

	i = 0;
	while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	contneg;
	int	resultado;

	i = espacios(str);
	contneg = 0;
	resultado = 0;
	while ((str[i] < '0' || str[i] > '9') && str[i] != '\0')
	{
		if (str[i] == '-')
			contneg ++;
		if (str[i] != '-' && str[i] != '+')
			return (0);
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		resultado = resultado * 10 + (str[i] - '0');
		i++;
	}
	if (contneg % 2 == 0)
		return (resultado);
	return (-resultado);
}
