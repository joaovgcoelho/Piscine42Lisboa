/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:38:40 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/13 20:53:19 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
// int main()
// {
// 	char text1[] = "dydytdru";
// 	char text2[] = "dydytdru"; //dssgdfsdkvhoishdv
// 	char *result = ft_strstr(text1, text2);
// 	if (result)
// 		printf("Encontrado: %s\n", result);
// 	else
// 		printf("Não encontrado!!!\n");
// 	return(0);
// }