/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:05:48 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/21 11:37:42 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *str, int chr)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)chr)
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}
