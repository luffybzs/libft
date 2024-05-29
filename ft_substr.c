/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:01:23 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/27 15:46:56 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	strlen;

	i = 0;
	if (!str)
	{
		return (NULL);
	}
	strlen = ft_strlen(str);
	if (start >= strlen)
	{
		return (ft_strdup(""));
	}
	substr = malloc(sizeof(char) * (len + 1));
	while (i < len && str[start + i])
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char *result;
	
	char str1[] = "Hello, ayoub!";
	result = ft_substr(str1, 7, 5);
	printf("Test 1 - result attendu : 'ayoub', ft_substr : '%s'\n", result);
	free(result);
	
	return (0);
}*/