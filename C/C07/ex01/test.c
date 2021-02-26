/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:06:47 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/25 09:43:27 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *array;
	int i;
	int j;

	j = 0;
	if (min >= max)
		return (NULL);
	i = min;
	array = malloc(sizeof(*array) * (max - min));
	while (i < max)
	{
		array[j] = i;
		i++;
		j++;
	}
	return (array);
}

int main()
{
	int *ptr;
	int max = 200;
	int min = 0;
	int j = 0;
	int i = min;
	
	ptr = ft_range(min, max);
	while (i < max)
	{
		printf("%d", ptr[j]);
		i++;
		j++;
	}
	free(ptr);
	return (0);
}
