/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:01:35 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/20 17:59:54 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t c)
{
	size_t	i;
	unsigned char	*str;
	unsigned char	val;

	i = 0;
	str = (unsigned char *)ptr;
	val = (unsigned char)value;
	
	while (i < c)
	{
		str[i] = (unsigned char)val;
		i++;
	}
	return (str);
}
/*
int main() {
    char str[20];
    size_t len = 15;
    int value = 'b';

    // Utilisation de la fonction standard memset
    memset(str, value, len);
    printf("memset: %s\n", str);

    // Utilisation de la fonction ft_memset
    ft_memset(str, value, len);
    printf("ft_memset: %s\n", str);

    return 0;
}
*/