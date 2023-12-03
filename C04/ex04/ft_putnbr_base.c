/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:00:46 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/28 11:02:44 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_nbr(char *base, int *basenbr, int i)
{
	while (i >= 0)
	{
		ft_putchar(base[basenbr[i]]);
		i--;
	}
}

int	ft_error(int base_lenght, char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base_lenght < 2)
		return (1);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	lnbr;
	int		base_lenght;
	int		basenbr[32];
	int		i;

	lnbr = nbr;
	base_lenght = ft_strlen(base);
	if (ft_error(base_lenght, base) == 1)
		return ;
	if (lnbr < 0)
	{
		ft_putchar('-');
		lnbr = -lnbr;
	}
	i = 0;
	while (lnbr > 0)
	{
		basenbr[i] = lnbr % base_lenght;
		lnbr = lnbr / base_lenght;
		i++;
	}
	i = i - 1;
	ft_print_nbr(base, basenbr, i);
}

/*int	main(void)
{
	int	nbr = -2147483648;
	char	base[] = "0123456789ABCDEF";
	ft_putnbr_base(nbr, base);
	return (0);
}*/
