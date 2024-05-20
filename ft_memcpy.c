/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:33:48 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/20 15:51:26 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*des;
	const unsigned char	*s;

	if (!dest && !src)
	{
		return (NULL);
	}
	des = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		des[i] = s[i];
		i++;
	}
	return (dest);
}
