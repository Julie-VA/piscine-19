/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:06:47 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/24 16:17:20 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int		itr;

	itr = 0;
	while (str[itr] != '\0')
		itr++;
	return (itr);
}

char	*placestr(char *str, char *sep, char **strs, int size)
{
	int i;
	int j;
	int h;
	
	i = 0;
	h = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[h++] = strs[i][j++];
		j = 0;
		i++;
		while (sep[j] != '\0' && i < size)
			str[h++] = sep[j++];
	}
	str[h] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int j;
	char *str;

	i = 0;
	j = 0;
	if (size == 0)
	{
		str = malloc(sizeof(*str) * 0);
		return (str);
	}
	while (i < size)
		j += ft_strlen(strs[i++]);
	str = malloc(sizeof(*str) * (j + (ft_strlen(sep) * (size - 1)) + 1));
	str = placestr(str, sep, strs, size);
	return (str);
}

int main()
{
	char *str;
	char *strs[] = {"hello", "salut", "yo", "hola", "coucou"};
	int size = 5;

	str = ft_strjoin(size, strs, "$");
	printf("%s", str);
	free(str);
	return (0);
}
