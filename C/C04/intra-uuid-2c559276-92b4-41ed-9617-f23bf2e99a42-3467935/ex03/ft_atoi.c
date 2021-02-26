/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:36:47 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/14 16:36:57 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checkspace(char *str)
{
	if (*str == ' ' || *str == '\n' || *str == '\f'
	|| *str == '\r' || *str == '\t' || *str == '\v')
		return (1);
	else
		return (0);
}

void	checkneg(int *neg, int *itr, char *str)
{
	if (*str == '-')
	{
		*neg = *neg + 1;
	}
	*itr = *itr + 1;
}

void	returnsign(int neg, int *rtrnval)
{
	neg = neg % 2;
	if (neg == 1)
		*rtrnval = *rtrnval * -1;
}

int		ft_atoi(char *str)
{
	int rtrnval;
	int itr;
	int neg;

	neg = 0;
	itr = 0;
	rtrnval = 0;
	if ((str[itr] >= '0' && str[itr] <= '9') || (str[itr] == '-')
	|| (str[itr] == '+') || checkspace(str + itr))
	{
		while (checkspace(str + itr))
			itr++;
		while (str[itr] == '-' || str[itr] == '+')
			checkneg(&neg, &itr, str + itr);
		while (str[itr] >= '0' && str[itr] <= '9')
		{
			rtrnval = (rtrnval * 10) + (str[itr] - '0');
			itr++;
		}
		if (neg > 0)
			returnsign(neg, &rtrnval);
		return (rtrnval);
	}
	else
		return (0);
}
