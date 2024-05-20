/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarab <ayarab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:18:44 by ayarab            #+#    #+#             */
/*   Updated: 2024/05/20 10:19:00 by ayarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int alpha)
{
	if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
	{
		return (1);
	}
	return (0);
}