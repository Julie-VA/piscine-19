/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:14:46 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/14 13:14:55 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checkalnum(char *str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		return (1);
	}
	else if (*str >= 'A' && *str <= 'Z')
	{
		return (2);
	}
	else if (*str >= '0' && *str <= '9')
	{
		return (3);
	}
	return (0);
}

void	capitalize(char *str, int *first)
{
	if (checkalnum(str) == 1)
	{
		*str = *str - 32;
	}
	*first = 1;
}

void	lowercase(char *str)
{
	if (checkalnum(str) == 2)
	{
		*str = *str + 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int itr;
	int first;

	first = 0;
	itr = 0;
	while (str[itr] != '\0')
	{
		if (checkalnum(str + itr) != 0 && (first == 0 || first == 1))
		{
			if (first == 1)
				lowercase(str + itr);
			if (first == 0)
				capitalize(str + itr, &first);
		}
		if (checkalnum(str + itr) == 0)
		{
			while (checkalnum(str + itr) == 0)
				itr++;
			first = 0;
			continue;
		}
		itr++;
	}
	return (str);
}
