/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:40:00 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/18 18:43:18 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	result = 1;
	while (nb != 1)
	{
		result = result * nb;
		nb = nb -1;
	}
	return (result);
}
// int main()
// {
// 	int number = 20;
// 	printf("%d\n", ft_iterative_factorial(number));
// }