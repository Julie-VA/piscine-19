/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:14:46 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/12 10:13:58 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int itr;
	int jtr;

	itr = 0;
	while (itr < size - 1)
	{
		jtr = 0;
		while (jtr < size - 1 - itr)
		{
			if (tab[jtr] > tab[jtr + 1])
			{
				ft_swap(&tab[jtr], &tab[jtr + 1]);
			}
			jtr++;
		}
		itr++;
	}
}
