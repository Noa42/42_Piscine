/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:00:37 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/25 18:16:39 by achacon-         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] -32;
		else if ((str[i] >= 'a' && str[i] <= 'z')
			&& (str[i - 1] < 'a' || str[i - 1] > 'z'))
		{
			if ((str[i -1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9'))
			{
				i++;
			}
			else
				str[i] = str[i] -32;
		}
		else
			str[i] = str[i];
	i++;
	}
	str[i] = '\0';
	return (str);
}
