/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberto <jroberto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:11:49 by jroberto          #+#    #+#             */
/*   Updated: 2021/04/13 16:15:47 by jroberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int*b);

int	main(void)
{
	int *a = calloc(1, sizeof(int));
	int *b = calloc(1, sizeof(int));

	*a = 11;
	*b = 21;
	printf("Before:\n %p: %d, %p %d\n", a, *a, b, *b);
	ft_swap(a, b);
	printf("After:\n %p: %d, %p %d\n", a, *a, b, *b);
	return (0);
}