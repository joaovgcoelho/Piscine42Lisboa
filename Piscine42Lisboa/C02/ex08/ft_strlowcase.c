/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:55:27 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/10 19:05:57 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += +32;
		i++;
	}
	return (str);
}
// int main()
// {
// 	char text[] = "SGDYUSDYUF";
// 	printf("%s\n", ft_strlowcase(text));
// 	char text1[] = "SYDFAFSYDGdshgfds";
// 	printf("%s\n", ft_strlowcase(text1));
// 	char text2[] = "HJVDFJ86";
// 	printf("%s\n", ft_strlowcase(text2));
// 	char text3[] = "KJDGSFYSG>>>?:";
// 	printf("%s\n", ft_strlowcase(text3));
// 	return(0);
// }