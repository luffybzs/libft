/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:23:47 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/23 13:41:09 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * (sizeof(char)));
	if (!str)
	{
		return (NULL);
	}
	while (s1[i])
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		str[j] = s2[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	const char	*str1 = "ayoub le chef";
	const char	*str2 = "   ,ouii...845454-";
	char		*result;

	result = ft_strjoin(str1, str2);
	if (result == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	printf("test : %s\n", result);
	free(result);
	return (0);
}
*/