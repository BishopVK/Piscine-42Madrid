/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:39:59 by danjimen          #+#    #+#             */
/*   Updated: 2023/12/02 23:47:41 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resultado;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	resultado = 1;
	while (nb > 1)
	{
		resultado *= nb;
		nb--;
	}
	return (resultado);
}

/*#include <stdio.h>

int	main(void)
{
	int	nb;
	int	factorial;

	nb = 4;
	factorial = ft_iterative_factorial(nb);
	printf("%i\n", factorial);
	return (0);
}*/
