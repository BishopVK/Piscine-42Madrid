/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:17:35 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/30 17:22:17 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>

int	main(void)
{
	int	index;
	int	resultado;

	index = 10;
	resultado = ft_fibonacci(index);
	printf("%i", resultado);
	return (0);
}*/
