/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:23:46 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/30 17:26:24 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	while (n < 46340)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int	nb;
	int	resultado;

	nb = 25;
	resultado = ft_sqrt(nb);
	printf("%i", resultado);
	return (0);
}*/
