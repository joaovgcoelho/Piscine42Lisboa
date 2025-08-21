/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:04:54 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/10 14:48:40 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	printf("%d\n", ft_str_is_numeric("98273619217012jgfk")); // 0
    printf("%d\n", ft_str_is_numeric("123456"));            // 1
    printf("%d\n", ft_str_is_numeric(""));                  // 1
	printf("%d\n", ft_str_is_numeric("98273619217012")); 	// 1
    printf("%d\n", ft_str_is_numeric("123?|}{¨:>}"));            // 1
    printf("%d\n", ft_str_is_numeric(" "));                  // 1
    return 0;
}*/