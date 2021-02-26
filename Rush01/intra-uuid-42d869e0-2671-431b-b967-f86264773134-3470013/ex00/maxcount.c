/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxcount.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 21:04:07 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/21 21:04:09 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		maxcount(int tab[4], int view)
{
	int i;
	int max;
	int counter;

	counter = 1;
	i = 1;
	max = tab[0];
	while (i < 4)
	{
		if (tab[i] > max)
		{
			max = tab[i];
			counter++;
		}
		i++;
	}
	if (counter == view)
		return (1);
	return (0);
}
