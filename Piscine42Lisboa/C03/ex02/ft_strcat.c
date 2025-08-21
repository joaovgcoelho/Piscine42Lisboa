/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:08:02 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/13 20:47:06 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
// int main()
// {
// 	char a[20] = "Olá";
// 	char b[] = "Mundo!!!";
// 	char c [20] = "Olá";
// 	char d [] = " Mundo!!!";
// 	char e[] = "Olá!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
// 	char f[] = " Mundo!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
// 	char g [5] = "Olá";
// 	char h [] = " Mundo!!!";
// 	char i [] = "Olá";
// 	char j [10] = " Mundo!!!";
// 	printf("%s: %s\n\n", "Exemplo", ft_strcat(a, b));
// 	printf("%s: %s\n\n", "DEST sem tam.", ft_strcat(c, d));
// 	printf("%s: %s\n\n", "SEM tam. atribuído", ft_strcat(e, f));
// 	printf("%s: %s\n\n", "SRC com tam. específico", ft_strcat(g, h));
// 	printf("%s: %s\n\n", "DEST com tam. específico", ft_strcat(i, j));
// 	return (0);
// }
