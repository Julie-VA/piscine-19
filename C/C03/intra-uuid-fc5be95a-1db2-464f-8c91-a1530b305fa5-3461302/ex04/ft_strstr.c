/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:14:46 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/13 12:42:05 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *str, char *to_find, int jtr)
{
	int itr;

	itr = 0;
	while (str[jtr] == to_find[itr] && str[jtr] != '\0' && to_find[itr] != '\0')
	{
		itr++;
		jtr++;
	}
	if (str[jtr] != to_find[itr] && to_find[itr] != '\0')
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int jtr;
	int i;

	jtr = 0;
	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[jtr] != '\0')
	{
		if (str[jtr] == to_find[0])
		{
			i = ft_strcmp(str, to_find, jtr);
			if (i == 0)
			{
				return (&str[jtr]);
			}
		}
		jtr++;
	}
	return (0);
}
