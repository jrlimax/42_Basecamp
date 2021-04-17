/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroberto <jroberto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:41:32 by jroberto          #+#    #+#             */
/*   Updated: 2021/04/14 23:32:54 by jroberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlowcase(char c)
{
	if (c > 64 && c < 91)
	{
		return (c + 32);
	}
	return (c);
}

char	ft_strupcase(char c)
{
	if (c > 96 && c < 123)
	{
		return (c - 32);
	}
	return (c);
}

char	ft_alpha(char c)
{
	if (!((c > 64 && c < 91) || (c > 96 && c < 123)))
	{
		if (c < '0' || c > '9')
			return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] != '\0')
		str[i] = ft_strupcase(str[i]);
	while (str[++i] != '\0')
	{
		if (!ft_alpha(str[i - 1]) && ft_alpha(str[i]))
			str[i] = ft_strupcase(str[i]);
		else
			str[i] = ft_strlowcase(str[i]);
	}
	return (str);
}
