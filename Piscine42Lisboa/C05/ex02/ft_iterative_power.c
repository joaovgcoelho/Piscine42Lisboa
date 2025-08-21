/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:54:45 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/18 18:45:13 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0 || nb == 0)
	{
		return (1);
	}
	result = 1;
	i = 0;
	while (i < power)
	{
		result = result * nb;
		i = i + 1;
	}
	return (result);
}
// int main()
// {
// 	printf("%d\n", ft_iterative_power(10, 3));
// 	return 1;
// }