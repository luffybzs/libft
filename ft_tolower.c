/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:30:48 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/21 11:40:48 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int down)
{
	unsigned char	a;

	a = (unsigned char)down;
	if (a >= 'A' && a <= 'Z')
	{
		a += 32;
	}
	return (a);
}
