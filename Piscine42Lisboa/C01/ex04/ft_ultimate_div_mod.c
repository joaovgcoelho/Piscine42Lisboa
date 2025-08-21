/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:12:26 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/05 20:47:03 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a / *b;
	*b = *a % *b;
	*a = x;
}
/*int main()
{
	int j =20, k = 3;

	printf("Valor atribuído ao ponteiro: A:%d B:%d\n\n", j, k);
	
	ft_ultimate_div_mod(&j, &k);
	
	printf("Resultado: A:%d B:%d\n", j, k);
}*/
