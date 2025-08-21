/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:23:26 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/10 18:54:47 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] += -32;
		i++;
	}
	return (str);
}
// int main()
// {
// 	char text[] = "dsgfiyesfhoir";
// 	printf("%s\n", ft_strupcase(text));
// 	char text1[] = "dsgfiygsaYTSGDVGSA";
// 	printf("%s\n", ft_strupcase(text1));
// 	char text2[] = "dsgfiyes554";
// 	printf("%s\n", ft_strupcase(text2));
// 	char text3[] = "dsgfiyL;F?>ir";
// 	printf("%s\n", ft_strupcase(text3));
// 	return(0);
// }