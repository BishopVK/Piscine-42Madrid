/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:24:10 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/20 19:36:16 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	flag;

	flag = 0;
	while (*str != '\0')
	{
		if (*str < 65 || (*str > 90 && *str < 97) || *str > 122)
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
	char	src[] = "Hola mundo!";
	int	nbr;

	nbr = ft_str_is_alpha(src);
	printf("Se ha devuelto: %i", nbr);
	return (0);
}*/
