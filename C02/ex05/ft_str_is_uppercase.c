/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:31:47 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/20 20:45:35 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	flag;

	flag = 0;
	while (*str != '\0')
	{
		if (*str < 65 || *str > 90)
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
	char	src[] = "HOLAMUNDO";
	int	nbr;

	nbr = ft_str_is_uppercase(src);
	printf("Se ha devuelto: %i", nbr);
	return (0);
}*/
