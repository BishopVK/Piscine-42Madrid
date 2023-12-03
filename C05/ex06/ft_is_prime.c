/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:27:31 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/30 17:28:30 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divisor;

	if (nb >= -1 && nb <= 1)
		return (0);
	if (nb > 0)
	{
		divisor = 2;
		while (divisor < nb)
		{
			if ((nb % divisor) == 0)
				return (0);
			divisor++;
		}
	}
	else if (nb < 0)
	{
		divisor = -2;
		while (divisor > nb)
		{
			if ((nb % divisor) == 0)
				return (0);
			divisor--;
		}
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	int	nb;
	int	resultado;

	nb = 11;
	resultado = ft_is_prime(nb);
	printf("%i\n", resultado);
	if (resultado == 1)
		printf("%i es primo", nb);
	else
		printf("%i no es primo", nb);
	return (0);
}*/
