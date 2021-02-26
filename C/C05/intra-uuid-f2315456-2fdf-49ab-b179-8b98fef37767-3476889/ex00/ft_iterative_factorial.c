/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 23:24:15 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/18 08:10:57 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int itr;
	int result;

	itr = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (itr <= nb)
	{
		result *= itr;
		itr++;
	}
	return (result);
}
