/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:21:02 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/20 20:30:05 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	flag;

	flag = 0;
	while (*str != '\0')
	{
		if (*str < 97 || *str > 122)
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
	char	src[] = "holamundo";
	int	nbr;

	nbr = ft_str_is_lowercase(src);
	printf("Se ha devuelto: %i", nbr);
	return (0);
}*/
