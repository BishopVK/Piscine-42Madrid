/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:06:50 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/18 18:42:51 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 11;
	b = 5;
	printf("El valor de a es: %d\n", a);
	printf("El valor de b es: %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("El resultado de la división es: %d\n", a);
	printf("El resultado del módulo es: %d\n", b);
	return (0);
}*/
