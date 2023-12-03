/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:17:34 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/20 20:24:23 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	flag;

	flag = 0;
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
			flag++;
		str++;
	}
	if (flag == 0)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	src[] = "0123456789";
	int	nbr;

	nbr = ft_str_is_numeric(src);
	printf("Se ha devuelto: %i", nbr);
	return (0);
}*/
