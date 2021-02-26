/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:36:47 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/13 15:00:06 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	new;
	int		temp;
	int		temp2;

	new = nb;
	if (new < 0)
	{
		write(1, "-", 1);
		new = -new;
	}
	if (new >= 10)
	{
		ft_putnbr(new / 10);
		temp = new % 10 + '0';
		write(1, &temp, 1);
	}
	else
	{
		temp2 = new + '0';
		write(1, &temp2, 1);
	}
}
