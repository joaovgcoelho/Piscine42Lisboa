/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:55:02 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/05 21:01:18 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (*str != '\0')
	{
		x++;
		str++;
	}
	return (x);
}
/*-int main()
{
	char *message;
	message = "Message of the day";
	int length;
	
	length = ft_strlen(message);  
	printf("\n\n\tMensagem: %s", message);
	printf("\n\nComprimento da mensagem: %d\n", length);  // Exibe o valor
	return 0;
}*/
