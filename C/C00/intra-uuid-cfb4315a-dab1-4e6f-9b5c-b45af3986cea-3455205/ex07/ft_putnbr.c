/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:36:47 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/10 12:44:02 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_neg(long int quotient)
{
	char towrite_neg;

	towrite_neg = (quotient * -1) % 10 + '0';
	write(1, &towrite_neg, 1);
}

void	write_pos(long int quotient)
{
	char towrite_pos;

	towrite_pos = quotient % 10 + '0';
	write(1, &towrite_pos, 1);
}

void	ft_putnbr(int nb)
{
	long int	div;
	long int	quotient;
	int			neg;

	neg = 0;
	div = 10000000000;
	while (div > 0)
	{
		quotient = nb / div;
		if (quotient < 0)
		{
			if (neg == 0)
			{
				write(1, "-", 1);
				neg = 1;
			}
			write_neg(quotient);
		}
		if (quotient > 0)
		{
			write_pos(quotient);
		}
		div /= 10;
	}
}
