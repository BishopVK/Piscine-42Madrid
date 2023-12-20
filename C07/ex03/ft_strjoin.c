/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bishopvk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:02:06 by bishopvk          #+#    #+#             */
/*   Updated: 2023/12/20 19:45:58 by bishopvk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (i < size && strs[i])
	{
		j = 0;
		while (strs[i][j++])
			count++;
		i++;
	}
	i = 0;
	if (sep[0] != '\0')
	{
		while (sep[i])
		{
			count += size - 1;
			i++;
		}
	}
	return (count);
}

char	*ft_concat(int size, char *str, char *sep, char **strs)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	while (j < size && strs[j])
	{
		k = 0;
		while (strs[j][k])
			str[i++] = strs[j][k++];
		if (j < size - 1 && sep[0] != '\0')
		{
			l = 0;
			while (sep[l])
				str[i++] = sep[l++];
		}
		j++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		count;

	count = ft_strlen(size, strs, sep);
	if (size == 0)
	{
		str = (char *)malloc(1);
		if (str == NULL)
			exit (EXIT_FAILURE);
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc((count + 1) * sizeof(char));
	if (str == NULL)
		exit (EXIT_FAILURE);
	str = ft_concat(size, str, sep, strs);
	return (str);
}

/*int	main(void)
{
	int		size = 4;
	char	*strs[] = {"Hola,", "soy", "Daniel", "Jiménez"};
	char	*sep = "-*";
	char	*resultado = ft_strjoin(size, strs, sep);

	printf("Resultado: %s\n", resultado);
	free(resultado);
	return (0);
}*/
