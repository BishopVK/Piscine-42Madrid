/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:47:37 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/20 20:54:31 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	flag;

	flag = 0;
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
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
	char	src[] = "(HoL@) M4nD0!";
	int	nbr;

	nbr = ft_str_is_printable(src);
	printf("Se ha devuelto: %i", nbr);
	return (0);
}*/
