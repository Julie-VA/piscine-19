/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 16:39:22 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/16 13:36:31 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		checkvalid(char *base)
{
	int		itr;
	int		jtr;

	itr = 0;
	jtr = 0;
	while (base[itr] != '\0')
	{
		if (base[itr] == '+' || base[itr] == '-')
			return (0);
		jtr = itr + 1;
		while (base[jtr] != '\0')
		{
			if (base[itr] == base[jtr])
				return (0);
			jtr++;
		}
		itr++;
	}
	return (1);
}

void	ft_rev_int_tab(char *tab, int size)
{
	int		itr;
	char	temp;

	temp = 0;
	itr = 0;
	while (size != 0 && itr < size / 2)
	{
		temp = tab[itr];
		tab[itr] = tab[(size - 1) - itr];
		tab[(size - 1) - itr] = temp;
		itr++;
	}
}

char	convbase(int mod)
{
	if (mod <= 9 && mod >= 0)
		return (mod + '0');
	else
		return (mod - 10 + 'A');
}

void	convnwrite(int ba, unsigned int nbr, char *result, char *base)
{
	int		mod;
	int		itr;
	int		temp;

	itr = 0;
	while (nbr > 0)
	{
		mod = nbr % ba;
		result[itr++] = convbase(mod);
		nbr = nbr / ba;
	}
	result[itr] = '\0';
	itr = 0;
	while (result[itr] != '\0')
		itr++;
	ft_rev_int_tab(result, itr);
	itr = -1;
	while (result[++itr] != '\0')
	{
		if (result[itr] >= 'A' && result[itr] <= 'Z')
			temp = 10 + (result[itr] - 65);
		else
			temp = result[itr] - '0';
		write(1, &base[temp], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				ba;
	char			result[33];
	int				itr;
	unsigned int	new;

	itr = 0;
	while (base[itr] != '\0')
		itr++;
	ba = itr;
	if (ba > 1 && checkvalid(base) == 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			new = (unsigned int)nbr;
			new = new * -1;
		}
		else
			new = (unsigned int)nbr;
		convnwrite(ba, new, result, base);
	}
}
