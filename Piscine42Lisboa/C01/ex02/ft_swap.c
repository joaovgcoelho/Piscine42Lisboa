/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:26:42 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/05 17:06:17 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	n;

	n = 0;
	n = *a;
	*a = *b;
	*b = n;
}
/*int main()
{
	int x;
	int y;
	
	x = 19;
	y = 37;
	printf("\nAntes: x: %d e y: %d\n\n", x, y);
	ft_swap(&x, &y);
	printf("Depois: x: %d e y: %d\n\n", x, y);
	return 0;
}*/