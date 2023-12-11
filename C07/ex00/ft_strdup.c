/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bishopvk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:30:10 by bishopvk          #+#    #+#             */
/*   Updated: 2023/12/11 14:23:02 by bishopvk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	size_t	len;
	char	*dest;
	size_t	i;

	len = 0;
	dest = (char *)malloc(len + 1);
	i = 0;
	if (src == NULL)
		return (NULL);
	while (src[len] != '\0')
		len++;
	if (dest == NULL)
	{
		//fprintf(stderr, "Error: No se pudo asignar memoria\n");
		exit(EXIT_FAILURE);
	}
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*original = "Hello, World!";
	char	*duplicate = ft_strdup(original);

	if (duplicate != NULL)
	{
		printf("Original: %s\n", original);
		printf("Duplicate: %s\n", duplicate);
		free(duplicate);
	}
	else
		fprintf(stderr, "Error: No se pudo duplicar la cadena\n");
	return (0);
}*/
