/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:14:46 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/16 09:30:04 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	convbase(unsigned int mod)
{
	if (mod <= 9 && mod >= 0)
		return (mod + '0');
	else
		return (mod - 10 + 'a');
}

void	ft_putstr_non_printable(char *str)
{
	int				itr;
	unsigned int	mod;
	char			towrite;
	unsigned char	result;

	itr = 0;
	while (str[itr] != '\0')
	{
		if (str[itr] < ' ' || str[itr] > '~')
		{
			towrite = '\\';
			write(1, &towrite, 1);
			towrite = str[itr] / 16 + '0';
			write(1, &towrite, 1);
			mod = str[itr] % 16;
			result = convbase(mod);
			write(1, &result, 1);
		}
		else
			write(1, &str[itr], 1);
		itr++;
	}
}
