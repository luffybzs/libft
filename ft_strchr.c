/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:05:48 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/20 17:59:26 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *str, int chr)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)chr)
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}
