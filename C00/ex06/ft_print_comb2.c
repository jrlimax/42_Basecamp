/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberto <jroberto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:11:38 by jroberto          #+#    #+#             */
/*   Updated: 2021/04/08 19:27:56 by jroberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_number(int x, int y)
{
	char char1;
	char char2;

	if (x <= 9)
	{
		char1 = '0';
		char2 = x + '0';
		ft_putchar(char1, char2);
	}
	else if (x <= y)
	{
		char1 = x / 10 + '0';
		char2 = x % 10 + '0';
		ft_putchar(char1, char2);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_number(a, 98);
			write(1, " ", 1);
			ft_print_number(b, 99);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
