/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:57:22 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/22 18:51:07 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*dest_original;
	unsigned int	i;

	dest_original = dest;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest_original);
}

/*int	main(void)
{
	char	src[] = "Hola mundo!";
	char	dest[20];
	int	n;

	n = 15;
	ft_strncpy(dest, src, n);
	printf("Cadena copiada: %s\n", dest);
	return (0);
}*/
