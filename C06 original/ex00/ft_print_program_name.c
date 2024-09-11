/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:50:24 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/29 12:47:23 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	if (argc == 1)
	{
		ft_putstr(argv[0]);
		write (1, "\n", 1);
	}
}
