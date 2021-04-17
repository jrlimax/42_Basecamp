/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberto <jroberto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:22:00 by jroberto          #+#    #+#             */
/*   Updated: 2021/04/08 19:01:05 by jroberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char num[3];

	num[0] = '0';
	num[1] = '0';
	num[2] = '0';
	while (num[0] <= '9')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '9' && num[1] > num[0])
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9' && num[2] > num[1])
			{
				write(1, num, 3);
				if (!(num[0] == '7' && num[1] == '8' && num[2] == '9'))
					write(1, ", ", 2);
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
