/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberto <jroberto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:19:14 by jroberto          #+#    #+#             */
/*   Updated: 2021/04/14 20:20:46 by jroberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	*ft_strlowcase(char *str);

int	main(void)
{
	char str1[] = "JOSE";
	char str2[] = "JooooOSSSSSsssEEEEeeeee";
	char str3[] = "AZ";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	ft_strlowcase(str1);
	ft_strlowcase(str2);
	ft_strlowcase(str3);
	printf("str1_low: %s\n", str1);
	printf("str2_low: %s\n", str2);
	printf("str3_low: %s\n", str3);
	return (0);
}
