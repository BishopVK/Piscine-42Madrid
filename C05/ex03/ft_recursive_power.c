/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:11:26 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/30 17:16:33 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power -1));
	else
		return (1);
}

/*#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;
	int	resultado;

	nb = 2;
	power = 5;
	resultado = ft_recursive_power(nb, power);
	printf("%i", resultado);
	return (0);
}*/
