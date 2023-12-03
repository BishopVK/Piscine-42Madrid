/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:13:48 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/22 18:56:38 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	char	*str_original;

	str_original = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (str_original);
}

/*int	main(void)
{
	char	str[] = "En uN lug4R DE la mANcha...";
	ft_strlowcase(str);
	printf("%s", str);
	return (0);
}*/
