/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:41:32 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/13 20:42:40 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// int main()
// {

// 	char str1[] = "strestreq";
// 	char str2[] = "strestre";
// 	printf("%d\n",ft_strcmp(str1, str2));
// 	char str3[] = "strestre";
//         char str4[] = "strestre";
//         printf("%d\n",ft_strcmp(str3, str4));
// 	char str5[] = "strestr";
//         char str6[] = "strestre";
//         printf("%d\n",ft_strcmp(str5, str6));
// }