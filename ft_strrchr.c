/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:13:53 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/26 17:25:02 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *str, int chr)
{
	size_t	i;

	i = ft_strlen(str);
	while (str[i] >= 0)
	{
		if (str[i] == (unsigned char)chr)
		{
			return (str + i);
		}
		i--;
	}
	return (NULL);
}
