/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:16:03 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/25 15:38:37 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int		itr;

	itr = 0;
	while (str[itr] != '\0')
		itr++;
	return (itr);
}

char				*ft_strdup(char *src)
{
	char	*dest;
	int		itr;
	int		l;

	l = ft_strlen(src);
	itr = 0;
	if (!(dest = malloc(sizeof(char) * l + 1)))
		return (NULL);
	while (itr < l)
	{
		dest[itr] = src[itr];
		itr++;
	}
	dest[itr] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*strc;

	if (ac < 0)
		ac = 0;
	if (!(strc = malloc(sizeof(t_stock_str) * ac + 1)))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		strc[i].size = ft_strlen(av[i]);
		strc[i].str = av[i];
		strc[i].copy = ft_strdup(av[i]);
		i++;
	}
	strc[i].str = 0;
	return (strc);
}
