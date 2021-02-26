/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 11:54:19 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/22 10:43:49 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int itr;

	itr = 0;
	while (s1[itr] == s2[itr] && (s1[itr] != '\0' || s2[itr] != '\0'))
		itr++;
	return (s1[itr] - s2[itr]);
}

void	ft_putstr(char *str)
{
	int itr;

	itr = 0;
	while (str[itr] != '\0')
	{
		write(1, &str[itr], 1);
		itr++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int itr;
	int jtr;

	itr = 1;
	while (itr < argc)
	{
		jtr = 1;
		while (jtr < argc - 1)
		{
			if (ft_strcmp(argv[jtr], argv[jtr + 1]) < 0)
			{
				ft_swap(&argv[jtr], &argv[jtr + 1]);
			}
			jtr++;
		}
		itr++;
	}
	itr = argc - 1;
	while (itr > 0)
	{
		ft_putstr(argv[itr]);
		itr--;
	}
	return (0);
}
