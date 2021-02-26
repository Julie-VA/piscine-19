/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:14:46 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/14 11:02:18 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	itr;

	itr = 0;
	while (str[itr] != '\0')
	{
		itr++;
	}
	return (itr);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	itr;
	unsigned int	length;

	length = ft_strlen(src);
	itr = 0;
	if (size > 0)
	{
		while (src[itr] != '\0' && itr < size - 1)
		{
			dest[itr] = src[itr];
			itr++;
		}
		dest[itr] = '\0';
	}
	return (length);
}
