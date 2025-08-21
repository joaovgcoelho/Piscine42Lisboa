/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:43:32 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/13 20:45:50 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}
// int main()
// {
// 	char text1[] = "testestets";
// 	char text2[] = "testetstettetetete";
// 	printf("%d\n", ft_strncmp(text1, text2, 30));
// 	char text3[] = "testetestetesteBA";
//         char text4[] = "teste";
//         printf("%d\n", ft_strncmp(text3, text4, 10));
// 	char text5[] = "teste";
//         char text6[] = "teste";
//         printf("%d\n", ft_strncmp(text5, text6, 5));
// 	char text7[] = "teste245";
//         char text8[] = "teste";
//         printf("%d\n", ft_strncmp(text7, text8, 7));
//         char text9[] = "teste";
//         char text10[] = "testeHgft";
//         printf("%d\n", ft_strncmp(text9, text10, 6));
// }
