/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:53:26 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/29 10:26:01 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		k = i;
		while (to_find[j] != '\0' && str[k] == to_find[j])
		{
			k++;
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	cadena[] = "Hola, Mundo!!";
	char	subcadena[] = "";

	printf("%s", ft_strstr(cadena, subcadena));
	return (0);
}*/
