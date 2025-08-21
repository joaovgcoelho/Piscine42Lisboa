/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 14:50:04 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/10 17:51:18 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	printf("%d", ft_str_is_lowercase("hgfysdyfges")); //1
	printf("%d", ft_str_is_lowercase("hgfyHBDSFyfges")); //0
	printf("%d", ft_str_is_lowercase("hgfysdy235476354fges")); //0
	printf("%d", ft_str_is_lowercase(""));//1
	printf("%d", ft_str_is_lowercase("fges")); //1
	printf("%d", ft_str_is_lowercase("hgfy(*^&&?ges")); //0
	printf("%d", ft_str_is_lowercase(" ")); //0
	return(1);
}*/