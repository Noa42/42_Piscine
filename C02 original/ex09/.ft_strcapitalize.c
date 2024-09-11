/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:52:12 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/23 13:43:29 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		else
		{
			str[i] = str[i];
		}
		i++;
	}
	return (str);
}

int	is_numeric(char caracter)
{
	int	resultado;

	resultado = 0;
	if (caracter >= '0' && caracter <= '9')
	{
		resultado = 1;
	}
	return (resultado);
}

int	is_amin(char caracter)
{
	int	resultado;

	resultado = 0;
	if (caracter >= 'a' && caracter <= 'z')
	{
		resultado = 1;
	}
	return (resultado);
}

int	is_alfanum(char c)
{
	int	resultado;

	resultado = 0;
	if (is_amin(c) == 1 || is_numeric(c) == 1)
	{
		resultado = 1;
	}
	return (resultado);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0 && is_amin(str[i]) == 1)
		{
			str[i] = str[i] - 32;
			i++;
			continue ;
		}
		else if (is_amin(str[i]) == 1 && is_alfanum(str[i -1]) == 0)
		{
			str[i] = str[i] - 32;
			i++;
			continue ;
		}
		else
		{
		str[i] = str[i];
		i++;
		}
	}
	return (str);
}

/*char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 'a' && str[i] < 'z') && i == 0)
		{
			str[i] = str[i] - 32;
			i++;
		} else if (str[i - 1] < 'a' && str[i - 1] > 'z')
			{
				if (str[i - 1] > 'A' && str[i] < 'Z')
				{
					i++;
					break ;
				}
				else
				{
					str[i] = str[i] - 32;
				}
			}
		str[i] = str[i];
		i++;
	}
	return (str);
}
**/