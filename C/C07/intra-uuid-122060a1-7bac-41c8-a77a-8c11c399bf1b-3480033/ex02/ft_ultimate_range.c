/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:06:47 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/25 09:38:21 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;
	int *array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = min;
	j = 0;
	array = malloc(sizeof(*array) * (max - min));
	while (i < max)
	{
		array[j] = i;
		i++;
		j++;
	}
	*range = array;
	return (max - min);
	return (-1);
}
