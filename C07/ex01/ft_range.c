/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lojimene <lorenzojmenezgarcia59@gmail.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:19:04 by lojimene          #+#    #+#             */
/*   Updated: 2023/12/12 18:19:12 by bishopvk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
  int range;
  int *nbrs;
  int i;

  if (min >= max)
    return (NULL);
  range = (max - min);
  nbrs = (int *)malloc(range * sizeof(int));
  if (nbrs == NULL)
    exit (EXIT_FAILURE);
  i = 0;
  while (i < range)
  {
    nbrs[i++] = min++;
  }
  return (nbrs);
}

/*int main(void)
{
  int a = -3;
  int b = 5;
  int *resultado;
  
  resultado = ft_range(a, b);
  while (*resultado)
    fprintf(stderr, "%i\n", *resultado++);
  return (0);
}*/
