/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:15:25 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/20 10:16:15 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int ascii)
{
	if (ascii >= 0 && ascii <= 127)
	{
		return (1);
	}
	return (0);
}
