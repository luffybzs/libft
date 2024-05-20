/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:02:51 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/20 11:36:30 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(char	*str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	size_t	i;
	char	*res;

	i = 0;
	res = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (res == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i] == '\0';
	return (res);
}
