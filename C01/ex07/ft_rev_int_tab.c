/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjimen <danjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:24:20 by danjimen          #+#    #+#             */
/*   Updated: 2023/11/21 08:28:24 by danjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;

	count = 0;
	while (count < (size / 2))
	{
		temp = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = temp;
		count++;
	}
}

/*int	main(void)
{	
	int size;

	size = 7;
	int tab[7] = {1, 2, 3, 4, 5, 6, 7};
	ft_rev_int_tab(tab, size);
	return (0);
}*/
