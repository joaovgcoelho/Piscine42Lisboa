/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:33:17 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/07 15:49:40 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	control;

	control = 0;
	while (src[control] != '\0')
	{
		dest[control] = src[control];
		control++;
	}
	dest[control] = '\0';
	return (dest);
}
/*int main()
{
	char destiny[100];
	char origin[] = "Olá para teste";

	
	printf("\tAntes de chamar a funcao:\n\t\tOrigem contém: %s\n", origin);

	ft_strcpy(destiny, origin);
	printf("\tDepois de chamar a funcao:\n\t\tDestino contém: %s\n", destiny);
	printf("\tValor da SRC: %s\t\t", origin);
	ft_strcpy(origin, " ");
	printf("\n\tValor atribuído a SRC depois de limpa:\n %s\n", origin);
	ft_strcpy(destiny, "Testestetesteste");
	printf("\tDepois de chamar a funcao:\n\t\tDestino contém: %s\n", destiny);

	return 0;
}*/
