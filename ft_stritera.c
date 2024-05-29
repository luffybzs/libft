/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stritera.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 12:28:55 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/27 14:41:23 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_stritera(char *str, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!str || !f)
	{
		return ;
	}
	i = 0;
	while (str[i])
	{
		f(i, &str[i]);
		i++;
	}
}
/*
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_change(unsigned int a, char *s)
{
	(void) a;
	
	if (*s >= 'a' && *s <= 'z')
	{
		*s -= 32;
	}
}
int	main(void)
{
	char	str[];

    str[] = "ayoubtest12121212";
    printf("avant la fonction: %s\n", str);
    ft_stritera(str, ft_change);
    printf("apres:  %s\n", str);
    return (0);
}
*/