/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:17:58 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/23 15:25:36 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dest_original;
	unsigned int	i;
	unsigned int	j;

	dest_original = dest;
	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest_original);
}

/*int	main(void)
{
	char	dest[11] = "Hola ";
	char	src[] = "mundo";
	ft_strncat(dest, src, 2);
	printf("%s", dest);
	return (0);
}*/
