/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:12:56 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/05 20:46:45 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	strchar;

	strchar = 0;
	while (str[strchar] != '\0')
	{
		write(1, &str[strchar], 1);
		strchar++;
	}
}
/*int main()
{
	char *message;

	message = "\nBonjour Tout Le Mounde\n\n";
	ft_putstr(message);
	return 0;
}*/
