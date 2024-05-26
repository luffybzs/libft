/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:50:59 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/26 11:02:50 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t len)
{
	unsigned char *total;
	size_t	i;
	
	i = 0;
	total = (char*)malloc(count * len);
	if (total == NULL)
	{
		return (NULL);
	}
	while (i < count * len)
	{
		total[i] = 0;
		i++;
	}
	return (total);
}
