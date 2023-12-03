/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:58:56 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/25 18:17:54 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_original;
	int		i;
	int		j;

	dest_original = dest;
	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
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
	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}*/
