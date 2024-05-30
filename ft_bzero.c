/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:22:18 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/30 18:08:10 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
	{
		*ptr = 0;
		ptr++;
	}
	return ;
}

/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char *str = "1234";
	ft_bzero(str, 3);
	for (int i = 0; i < 5; i++)
		write(1, &str[i], 1);
	return (0);
}*/