/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:06:47 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/25 09:44:06 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int main()
{
	int i;
	int **range;
	int max = 4;
	int min = 10;
	int j = 0;
	int h = min;
		
	range = malloc(sizeof(*range));
	i = ft_ultimate_range(range, min, max);
	printf("%d\n", i);
	while (*range != NULL && h < max)
	{
		printf("%d", range[0][j]);
		j++;
		h++;
	}
	free(range);
	return (0);
}
