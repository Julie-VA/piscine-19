/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 08:19:42 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/18 09:36:48 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	doublemod(double x, int y)
{
	return (x - (((int)x / y) * y));
}

double	ft_sqrt(int nb)
{
	int		itr;
	double	x;

	itr = 0;
	if (nb < 0)
		return (0);
	if (nb > 1000000)
		x = 10000000;
	if (nb > 100)
		x = 1000;
	else
		x = 10;
	while (itr < 10)
	{
		x = (x + (nb / x)) / 2;
		itr++;
	}
	return (x);
}

int ft_is_prime(int nb)
{
	double	x;
	int		itr;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	x = ft_sqrt(nb);
	if (doublemod(x, 1) != 0)
		x += 1;
	itr = 2;
	while (itr <= x)
	{
		if (nb % itr == 0)
			return (0);
		itr++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

#include <stdio.h>

int main()
{
	int i = 0;

	i = ft_find_next_prime(9);
	printf("%d", i);
}

//331999, 479001599