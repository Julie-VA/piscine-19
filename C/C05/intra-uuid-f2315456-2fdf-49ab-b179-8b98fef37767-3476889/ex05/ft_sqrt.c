/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 08:19:42 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/23 16:06:42 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	doublemod(double x, int y)
{
	return (x - (((int)x / y) * y));
}

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb == 1)
		return (1);
	if (nb % 2 == 0)
		i = 0;
	else
		i = 1;
	while (i <= nb / 2)
	{
		if ((i * i) == nb)
			return (i);
		i += 2;
	}
	return (0);
}
