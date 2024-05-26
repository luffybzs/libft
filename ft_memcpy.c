/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:33:48 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/21 12:42:52 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	char		*des;
	char		*s;

	if (!dest && !src)
	{
		return (NULL);
	}
	des = (char *)dest;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		des[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dst[20];

    ft_memcpy(dst, src, strlen(src) + 1); // +1 pour inclure le caractère nul '\0'

    // Affichage du résultat
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst);

    // Vérification avec des valeurs binaires (par exemple, un tableau d'entiers)
    int src_int[] = {1, 2, 3, 4, 5};
    int dst_int[5];

    // Utilisation de ft_memcpy
    ft_memcpy(dst_int, src_int, sizeof(src_int));

    // Affichage des résultats
    printf("Source (int): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", src_int[i]);
    }
    printf("\nDestination (int): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", dst_int[i]);
    }
    printf("\n");

    return 0;
}
*/