/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lojimene <lorenzojmenezgarcia59@gmail.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:19:04 by lojimene          #+#    #+#             */
/*   Updated: 2023/12/12 14:49:34 by lojimene         ###   ########.es       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
  int range;
  int *nbrs;
  int i;

  if (min >= max)
    return (NULL);
  range = (max - min);
  fprintf (stderr, "range: %d\n", range);
  nbrs = (int *)malloc(range * sizeof(int));
  if (nbrs == NULL)
    exit (-1);
  i = 0;
  while (i < range)
  {
    fprintf (stderr, "valores: %d\n", min);
    nbrs[i++] = min++;
    fprintf (stderr, "i: %d\n", i);
  }
  return (nbrs);
}

int main(void)
{
  int a = -3;
  int b = 5;
  int *resultado;
  
  resultado = ft_range(a, b);
  while (*resultado)
    fprintf(stderr, "%i\n", *resultado++);
  return (0);
}
