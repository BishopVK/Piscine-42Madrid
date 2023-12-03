/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:17:03 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/22 18:22:02 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	char			*dest_start;
	unsigned int	i;

	dest_start = dest;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest_start);
}

/*int	main(void)
{
	char	src[] = "Hola mundo!";
	char	dest[20];

	ft_strcpy(dest, src);
	printf("Cadena copiada: %s\n", dest);
	return (0);
}*/
