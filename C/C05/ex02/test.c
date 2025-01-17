/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 23:24:15 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/18 08:09:03 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int itr;
	int result;
	
	itr = 1;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (itr <= power)
	{
		result *= nb;
		itr++;
	}
	return (result);
}

#include <stdio.h>

int main()
{
	int i = 0;

	i = ft_iterative_power(3, 5);
	printf("%d", i);
}
