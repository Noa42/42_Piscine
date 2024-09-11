/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achacon- <achacon-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:39:28 by achacon-          #+#    #+#             */
/*   Updated: 2023/03/23 17:49:32 by achacon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);
void	imphexa(char c);
int	main(void)
{
	char cadena[] = "Habia \n";

	ft_putstr_non_printable(cadena);
}
