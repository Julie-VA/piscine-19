/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:06:47 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/22 11:25:31 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;

	if (max - min <= 0)
	{
		*range = NULL;
		return (0);
	}
	i = min;
	j = 0;
	*range = malloc(sizeof(**range) * (max - min));
	while (i < max)
	{
		range[0][j] = i;
		i++;
		j++;
	}
	return (max - min);
}
