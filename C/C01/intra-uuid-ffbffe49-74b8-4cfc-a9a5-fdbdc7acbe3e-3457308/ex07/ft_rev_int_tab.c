/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:14:46 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/10 15:16:12 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int itr;
	int temp;

	temp = 0;
	itr = 0;
	while (size != 0 && itr < size / 2)
	{
		temp = tab[itr];
		tab[itr] = tab[(size - 1) - itr];
		tab[(size - 1) - itr] = temp;
		itr++;
	}
}
