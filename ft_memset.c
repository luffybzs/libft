/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:01:35 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/23 14:03:26 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int value, size_t len)
{
	char	*start;
	
	start = str;
	while (len)
	{
		*start = value;
		len--;
		start++;
	}
	return (str);
}
/*
#include <stddef.h>
#include <stdio.h>
#include <string.h>
int	main(void) {
    char str[] = "bbbbbbbbbbbbbbbbbbbbbbbb";
    size_t len = 10;
    int value = 'a';

    // Utilisation de la fonction standard memset
    memset(str, value, len);
    printf("memset: %s\n", str);

    // Utilisation de la fonction ft_memset
    ft_memset(str, value, len);
    printf("ft_memset: %s\n", str);

    return (0);
}
*/