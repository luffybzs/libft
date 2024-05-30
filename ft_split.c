/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:21:01 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/30 18:08:57 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(char **res)
{
	size_t	i;

	i = 0;
	while (res[i])
		free(res[i++]);
	free(res);
	return ;
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
				return (ft_free(res), NULL);
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
	char	**res;

	i = 0;
	if (str == NULL)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (ft_countlen(str, c) + 1));
	if (!res)
		return (NULL);
	while (str[i] == c)
		i++;
	return (res);
}
/*
	//char	*j;
	//j = ft_split2((char *)str, c, res, i);
int	main(void)
{
	char const *str;
	char l;
	char **res;
	int i;

	str = "auaua a uaa ua aua ua  a        ";
	l = ' ';
	res = ft_split(str, l);
	i = 0;
	while (res[i])
		printf("%s\n", res[i++]);
	return (0);
}*/