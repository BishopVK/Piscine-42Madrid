/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:20:45 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/29 13:22:59 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	srclenght;
	unsigned int	i;

	srclenght = 0;
	while (src[srclenght] != '\0')
		srclenght++;
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclenght);
}

/*int	main(void)
{
	char			src[] = "Hola Caracola!";
	char			dest[20];
	unsigned int	srclenght;


	srclenght = ft_strlcpy(dest, src, 20);
	printf("Cadena de destino: %s\n", dest);
	printf("El tamaño de la cadena de origen: %u\n", srclenght);
	return (0);
}*/
