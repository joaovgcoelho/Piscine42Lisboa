/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:05:10 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/10 19:30:31 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
// int main()
// {
// 	printf("%d\n", ft_str_is_printable("AJDSBFEUSDUFSFO"));    //1  
// 	printf("%d\n", ft_str_is_printable("AJDSBFE24234USDUFSFO"));  //1
// 	printf("%d\n", ft_str_is_printable("AJDSBhjfyufgFO"));      //  1
// 	printf("%d\n", ft_str_is_printable("*^&)(*("));           //   1 
// 	printf("%d\n", ft_str_is_printable("AAAAAAAAA"));  //1
// 	printf("%d\n", ft_str_is_printable("\n"));  //0
// }