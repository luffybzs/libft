/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:21:01 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/28 17:41:02 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_free(char **res)
{
	size_t	i;

	i = 0;
	while (res[i])
		free(res[i++]);
	free(res);
	return (0);
}

static size_t	ft_countlen(char const *str, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] != c)
			len++;
		while (str[i] != c && str[i])
			i++;
		if (str[i])
			i++;
	}
	return (len);
}

static size_t	ft_lenword(const char *str, char c, int pos)
{
	size_t	i;
	size_t	len;

	i = pos;
	len = 0;
	while (str[i] != c && str[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_split2(char *str, char c, char **res, int i)
{
	size_t	k;
	size_t	j;

	k = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			res[j] = malloc(sizeof(char) * (ft_lenword(str, c, i) + 1));
			if (!res)
				return (ft_free(res));
			while (str[i] != c && str[i])
				res[j][k++] = str[i++];
			res[j][k] = 0;
			k = 0;
			j++;
		}
		else
			i++;
	}
	res[j] = 0;
	return (str + j);
}

char	**ft_split(char const *str, char c)
{
	size_t	i;
	size_t	len;
	char	**res;
	char	*j;

	i = 0;
	len = 0;
	if (!str)
		return (NULL);
	len = ft_countlen(str, c);
	res = malloc(sizeof(char *) * (ft_countlen(str, c) + 1));
	if (!res)
		return (NULL);
	while (str[i] == c)
		i++;
	j = ft_split2((char *)str, c, res, i);
	return (res);
}

int	main(void)
{
	char const *str;
	char l;
	char **res;
	int i;

	str = NULL;
	l = ' ';
	res = ft_split(str, l);
	i = 0;
	while (res[i])
		printf("%s\n", res[i++]);
}