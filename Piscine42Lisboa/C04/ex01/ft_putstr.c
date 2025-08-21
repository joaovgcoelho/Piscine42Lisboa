/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 13:15:41 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/18 15:25:07 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	size = i;
	write(1, str, size);
}
int main()
{
	ft_putstr("hcduy\n");
	return(0);
}
