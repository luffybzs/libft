/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:13:53 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/22 09:55:06 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*strrchr(const char *str, int chr)
{
	size_t	i;

	i = ft_strlen(str);
	while (str[i] >= 0)
	{
		if (str[i] == (unsigned char)chr)
		{
			return (str + i);
		}
		i--;
	}
	return (NULL);
}
