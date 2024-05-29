/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:03:20 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/28 11:46:15 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;

	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		while (str[i + j] == to_find[j] && str[i + j] && i + j < len)
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)str + i);
		}
		i++;
		j = 0;
	}
	return (0);
} 
int main()
{
	const char *str;
	const char 	*to_find;
	str = "ayoub aran ducene";
	to_find = "arab";
	printf("reslut , %s", ft_strnstr(str, to_find, 51));
	return (0);
	
	
	
	
}