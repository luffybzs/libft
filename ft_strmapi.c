/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 11:34:07 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/28 11:21:44 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*reslut;
	size_t	i;

	if (!str || !f)
	{
		return (NULL);
	}
	reslut = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!reslut)
	{
		return (NULL);
	}
	i = 0; 
	while (str[i])
	{
		reslut[i] = f(i, str[i]);
		i++;
	}
	reslut[i] = '\0';
	
	return (reslut);
}

/*
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
char	ft_tolower(unsigned int down, char a)
{
	(void) down;
	if (a >= 'A' && a <= 'Z')
	{
		a += 32;
	}
	return (a);
}

char	ft_toupper(unsigned int a, char	c)
{
	(void) a;
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
int main(void)
{
    char *test1 = "abcdef51515";
	char *test2 = "ABCDEF15115";
    char *result;

    result = ft_strmapi(test2, ft_tolower);
    if (result)
    {
        printf("Result: %s\n", result); 
        free(result);
    }

    result = ft_strmapi(test1, ft_toupper);
    if (result)
    {
        printf("Result: %s\n", result); 
        free(result);
    }
    return 0;
}
*/