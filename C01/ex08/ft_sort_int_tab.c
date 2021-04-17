/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberto <jroberto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:13:52 by jroberto          #+#    #+#             */
/*   Updated: 2021/04/14 00:30:07 by jroberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int bigger;

	while (size >= 1)
	{
		bigger = tab[size - 1];
		i = 0;
		while (i < size)
		{
			if (bigger < tab[i])
			{
				bigger = tab[i];
				ft_swap(&tab[i], &tab[size - 1]);
			}
			i++;
		}
		size--;
	}
}
