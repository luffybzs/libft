/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:50:09 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/23 13:37:03 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendest;
	size_t	lensrc;
	size_t	i;
	size_t	j;

	lendest = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = 0;
	j = 0;
	
	while (i < size && *dst)
	{
		i++;
		dst++;
	}
	if (i >= size - 1)
	{
		return (i + lensrc);
	}
	while (src[j])
	{
		if (j + i < size - 1)
		{
			*dst++ = src[j];
		}
		j++;
	}
	*dst = '\0';
	return (i + j);
}
/*
#include <stdio.h>
#include <string.h>

int main(void) {
    char destination[] = "ayoub";
    const char source[] = "idrissa";
    
    printf("Avant ft_strlcat:\n");
    printf("destination: '%s'\n", destination);
    printf("source: '%s'\n", source);
    size_t result = ft_strlcat(destination, source, 50);
    printf("\nAprès ft_strlcat:\n");
    printf("destination: '%s'\n", destination);
    printf("Longueur totale prévue: %zu\n", result);
    
    return 0;
}
*/