/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:32:44 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/21 11:34:05 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *str, int chr, size_t len)
{
	const unsigned char	*src;
	unsigned char		search;
	size_t				i;

	i = 0;
	src = (unsigned char *)str;
	search = (unsigned char)chr;
	while (i < len)
	{
		if (src[i] == search)
		{
			return ((void *)src + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void) 
{
    char str[] = "Hello, world!";
    char *ptr_std, *ptr_ft;

    // Utilisation de la fonction standard memchr
    ptr_std = memchr(str, 'y', strlen(str));
    if (ptr_std != NULL) {
        printf("memchr: Found 'y' at position %ld\n", ptr_std - str);
    } else {
        printf("memchr: 'y' not found\n");
    }

    // Utilisation de la fonction ft_memchr
    ptr_ft = ft_memchr(str, 'y', strlen(str));
    if (ptr_ft != NULL) {
        printf("ft_memchr: Found 'y' at position %ld\n", ptr_ft - str);
    } else {
        printf("ft_memchr: 'y' not found\n");
    }

    return (0);
}
*/