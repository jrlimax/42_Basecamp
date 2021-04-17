/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberto <jroberto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:26:53 by jroberto          #+#    #+#             */
/*   Updated: 2021/04/12 22:27:38 by jroberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main(void)
{
	int n;
	int *pointer;
	int **pointer2;
	int ***pointer3;
	int ****pointer4;
	int *****pointer5;
	int ******pointer6;
	int *******pointer7;
	int ********pointer8;
	int *********pointer9;

	pointer = &n;
	pointer2 = &pointer;
	pointer3 = &pointer2;
	pointer4 = &pointer3;
	pointer5 = &pointer4;
	pointer6 = &pointer5;
	pointer7 = &pointer6;
	pointer8 = &pointer7;
	pointer9 = &pointer8;

	ft_ultimate_ft(pointer9);
	printf("%d\n", n);
	return(0);
}