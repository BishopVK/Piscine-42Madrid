/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bishopvk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:17:35 by bishopvk          #+#    #+#             */
/*   Updated: 2023/12/13 14:34:49 by bishopvk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = (max - min);
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
		exit (EXIT_FAILURE);
	i = 0;
	while (i < size)
		(*range)[i++] = min++;
	return (size);
}

/*int	main(void)
{
	int	min = -4;
	int	max = 6;
	int	*range = NULL;
	int	resultado;

	resultado = ft_ultimate_range(&range, min, max);
	printf("Rango = %i\n", resultado);
	free (range);
	return (0);
}*/
