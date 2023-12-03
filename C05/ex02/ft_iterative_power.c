/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:08:49 by danjimen          #+#    #+#             */
/*   Updated: 2023/12/03 00:42:04 by bishopvk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resultado;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	resultado = nb;
	while (power > 1)
	{
		resultado *= nb;
		power--;
	}
	return (resultado);
}

/*#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;
	int	resultado;

	nb = 3100;
	power = 0;
	resultado = ft_iterative_power(nb, power);
	printf("%i\n", resultado);
	return (0);
}*/
