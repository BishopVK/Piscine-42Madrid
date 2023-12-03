/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:48:50 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/29 12:37:31 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int	i;
	int	signo;
	int	nb;

	i = 0;
	signo = 0;
	nb = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signo++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	if (signo % 2 == 1)
		nb = -nb;
	return (nb);
}

/*int	main(void)
{
	int	resultado;

	resultado = ft_atoi("   ----+--21474ab83645");
	printf("Resultado = %d\n", resultado);
	return (0);
}*/
