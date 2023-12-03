/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:47:37 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/30 16:55:16 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int	nb;
	int	factorial;

	nb = 4;
	factorial = ft_recursive_factorial(nb);
	printf("%i", factorial);
	return (0);
}*/
