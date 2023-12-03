/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:42:32 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/19 22:04:25 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/*int	main(void)
{
	char str[] = "HOLA";
    
	write(1, str, 4); //Devuelve HOLA
	write(1, "\n", 1); //Devuelve un salto de línea
	ft_putstr(str);
	return (0);
}*/
