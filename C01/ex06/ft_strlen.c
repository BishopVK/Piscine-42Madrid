/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:48:55 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/18 18:46:16 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>*/

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/*int	main(void)
{
	char str[] = "HOLA";

	write(1, str, 4); //Devuelve HOLA
	write(1, "\n", 1); //Devuelve un salto de línea
	int lenght;

	lenght = ft_strlen(str);

	printf("%d", lenght);

	return (0);
}*/
