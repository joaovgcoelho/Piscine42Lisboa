/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaogome <joaogome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 12:40:18 by joaogome          #+#    #+#             */
/*   Updated: 2025/08/05 17:56:49 by joaogome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int t1 = 1425643;
	int t2 = 3421;
	int result1;
	int result2;

	printf("\nAntes da conta: %d e %d\n\n", t1, t2);
	
	ft_div_mod(t1, t2,&result1,&result2);
	
    printf("Depois da conta:\n\n");
    printf("Divisão (%d / %d) = %d\n", t1, t2, result1);
    printf("Resto   (%d %% %d) = %d\n\n", t1, t2, result2);
}*/
