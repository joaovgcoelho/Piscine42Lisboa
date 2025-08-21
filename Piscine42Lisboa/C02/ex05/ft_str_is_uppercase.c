/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:10:18 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/10 18:04:20 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}
// int main()
// {
// 	printf("%d\n", ft_str_is_uppercase("AJDSBFEUSDUFSFO"));    //1  
// 	printf("%d\n", ft_str_is_uppercase("AJDSBFE24234USDUFSFO"));  //0
// 	printf("%d\n", ft_str_is_uppercase("AJDSBhjfyufgFO"));      //0  
// 	printf("%d\n", ft_str_is_uppercase("*^&)(*("));           //0    
// 	printf("%d\n", ft_str_is_uppercase("AAAAAAAAA"));  //1
// }