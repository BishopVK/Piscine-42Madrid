/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 08:19:37 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/15 09:32:13 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int num1, int num2)
{
	char	dnum1;
	char	rnum1;
	char	dnum2;
	char	rnum2;

	dnum1 = ((num1 / 10) + '0');
	rnum1 = ((num1 % 10) + '0');
	dnum2 = ((num2 / 10) + '0');
	rnum2 = ((num2 % 10) + '0');
	write(1, &dnum1, 1);
	write(1, &rnum1, 1);
	write(1, " ", 1);
	write(1, &dnum2, 1);
	write(1, &rnum2, 1);
	if (!(num1 == 98 && num2 == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 1;
	while (num1 <= 98)
	{
		while (num2 <= 99)
		{
			ft_putchar(num1, num2);
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
