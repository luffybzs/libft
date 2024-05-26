/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:03:20 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/21 10:41:17 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	unsigned int	verif;
	int				bool;

	verif = 0;
	bool = 0;
	i = 0;
	j = 0;
	len = ft_strlen(to_find);
	while (str[i])
	{
		if (str[i])
	}
}

int	main(void)
{
	char str[] = "ayoub arab 42";
	char search[] = "arab";

	*ft_strstr(str, search);

	return (0);
}