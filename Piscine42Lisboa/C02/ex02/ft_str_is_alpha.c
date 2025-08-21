/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:50:30 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/08 13:07:26 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == 0)
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
	printf("%d\n", ft_str_is_alpha("testetststetsts"));//1
	printf("%d\n", ft_str_is_alpha("testet65sjshu"));//0
	printf("%d\n", ft_str_is_alpha("testetASDFtsts"));//1
	printf("%d\n", ft_str_is_alpha("teste8762./l_)tsts"));//0
	printf("%d\n", ft_str_is_alpha(" ")); //0
	printf("%d\n", ft_str_is_alpha("")); //1
}*/