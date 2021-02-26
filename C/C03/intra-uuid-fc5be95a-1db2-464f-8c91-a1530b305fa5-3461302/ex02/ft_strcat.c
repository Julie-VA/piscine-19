/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:14:46 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/18 12:25:58 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int itr;
	int jtr;

	itr = 0;
	jtr = 0;
	while (dest[itr] != '\0')
		itr++;
	dest[itr] = src[jtr];
	while (src[jtr] != '\0')
	{
		dest[itr] = src[jtr];
		itr++;
		jtr++;
	}
	dest[itr] = '\0';
	return (dest);
}
