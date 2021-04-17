/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberto <jroberto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:37:59 by jroberto          #+#    #+#             */
/*   Updated: 2021/04/14 18:04:39 by jroberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = calloc(11, sizeof(char));
	str2 = calloc(11, sizeof(char));
	str3 = calloc(11, sizeof(char));
	str4 = calloc(11, sizeof(char));
	str1 = "012345²6789";
	str2 = "123456a789";
	str3 = "012356&789";
	str4 = "";
	printf("str1: %s, is_num: %d\n", str1, ft_str_is_numeric(str1));
	printf("str2: %s, is_num: %d\n", str2, ft_str_is_numeric(str2));
	printf("str3: %s, is_num: %d\n", str3, ft_str_is_numeric(str3));
	printf("str4: %s, is_num: %d\n", str4, ft_str_is_numeric(str4));
	return (0);
}