/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:06:42 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/10 19:29:04 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		return (str);
	}
	return (0);
}
// int main()
// {
// 	char text[] = "jetsgjdsh";
// 	printf("%s\n", ft_strcapitalize(text));
// 	char text1[] = "ksdnf>:¨?gjdsh";
// 	printf("%s\n", ft_strcapitalize(text1));
// 	char text2[] = "Hgjdsh";
// 	printf("%s\n", ft_strcapitalize(text2));
// 	char text3[] = "4yet87dsh";
// 	printf("%s\n", ft_strcapitalize(text3));
// 	return (0);
// }