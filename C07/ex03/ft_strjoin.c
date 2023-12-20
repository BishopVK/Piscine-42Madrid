/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bishopvk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:02:06 by bishopvk          #+#    #+#             */
/*   Updated: 2023/12/20 12:31:45 by bishopvk         ###   ########.fr       */
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
		while (strs[i][j])
		{
			fprintf(stderr, "%c %d %d\n", strs[i][j], i, j);
			count++;
			j++;
		}
		i++;
	}
	i = 0;
	if (sep[0] != '\0')
	{
		while (sep[i])
		{
			fprintf(stderr, "sep[i], count and i: %c %d %d\n", sep[i], count, i);
			count += size - 1;
			i++;
		}
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;
	int		l;
	int		count;

	count = ft_strlen(size, strs, sep);
	printf("Count: %i\n", count);
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

int	main(void)
{
	int		size = 3;
	char	*strs[] = {"Hola,", "soy", "Daniel"};
	char	*sep = "-*";
	char	*resultado = ft_strjoin(size, strs, sep);

	printf("Resultado: %s\n", resultado);
	free(resultado);
	return (0);
}
