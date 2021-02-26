/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:14:46 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/13 16:17:46 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_not_alpha(char *str)
{
	if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
	{
		return (1);
	}
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int itr;

	itr = 0;
	while (str[itr] != '\0')
	{
		if (check_not_alpha(str + itr) == 1)
		{
			return (0);
		}
		itr++;
	}
	return (1);
}
