/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihenriq <dihenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:46:23 by dihenriq          #+#    #+#             */
/*   Updated: 2021/04/15 13:40:28 by dihenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	char			aux;

	i = 0;
	aux = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		aux = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (s1[i] != s2[i])
			return (aux);
		i++;
	}
	return (aux);
}
