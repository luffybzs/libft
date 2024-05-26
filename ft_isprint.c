/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:47:01 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/20 10:47:08 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int print)
{
	if (print >= 32 && print <= 127)
	{
		return (1);
	}
	return (0);
}
