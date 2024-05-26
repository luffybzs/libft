/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:36:56 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/26 13:43:38 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int main() {
    char str1[] = "abcdef";
    char str2[] = "abcdeg";

    int result = ft_memcmp(str1, str2,2);
    if (result < 0) {
        printf("str1 est plus petit str2\n");
    } else if (result > 0) {
        printf("str1 est plus grand str2\n");
    } else {
        printf("str1 est egal a str2\n");
    }
    return 0;
}
*/