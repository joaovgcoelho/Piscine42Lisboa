/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 18:05:14 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/18 18:46:10 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0 || nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
// int main()
// {
// 	printf("%d\n",ft_recursive_power(10,5));
// 	return 1;
// }