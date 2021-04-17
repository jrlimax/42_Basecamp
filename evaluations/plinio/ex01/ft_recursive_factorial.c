/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberto <jroberto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:21:39 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/17 01:56:52 by jroberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int number;

	number = 0;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (number = nb * ft_recursive_factorial(nb - 1));
}
