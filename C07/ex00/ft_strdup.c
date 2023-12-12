/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bishopvk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:30:10 by bishopvk          #+#    #+#             */
/*   Updated: 2023/12/12 18:16:42 by bishopvk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*principio;

	if (src == NULL)
		return (NULL);
	dest = (char *)malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		exit (EXIT_FAILURE);
	principio = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (principio);
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
