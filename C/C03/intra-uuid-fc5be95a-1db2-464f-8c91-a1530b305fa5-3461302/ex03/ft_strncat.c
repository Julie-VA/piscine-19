/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:14:46 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/17 15:45:07 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		itr;

	itr = 0;
	while (str[itr] != '\0')
		itr++;
	return (itr);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int itr;
	unsigned int length;

	itr = 0;
	length = ft_strlen(dest);
	while (itr < nb && src[itr] != '\0')
	{
		dest[length + itr] = src[itr];
		itr++;
	}
	dest[length + itr] = '\0';
	return (dest);
}
