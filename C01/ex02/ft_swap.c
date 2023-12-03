/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 08:36:48 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/18 18:39:53 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int	main(void)
{
	int	n1;
	int	n2;

	n1 = 5;
	n2 = 10;
	
	printf("El valor de a es: %d\n", n1);
	printf("El valor de b es: %d\n", n2);
	ft_swap(&n1, &n2);
	printf("Ahora el valor de a es: %d\n", n1);
	printf("Ahora el valor de b es: %d\n", n2);
	return (0);
}*/
