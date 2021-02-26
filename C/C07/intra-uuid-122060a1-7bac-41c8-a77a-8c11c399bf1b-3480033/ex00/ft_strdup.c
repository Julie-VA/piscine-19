/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:06:47 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/24 16:19:07 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		itr;

	itr = 0;
	while (str[itr] != '\0')
		itr++;
	return (itr);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		itr;

	itr = 0;
	dest = malloc(sizeof(dest) * ft_strlen(src) + 1);
	while (src[itr])
	{
		dest[itr] = src[itr];
		itr++;
	}
	dest[itr] = '\0';
	return (dest);
}
