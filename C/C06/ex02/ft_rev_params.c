/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 11:54:19 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/18 15:28:25 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

	itr = argc - 1;
	while (itr > 0)
	{
		ft_putstr(argv[itr]);
		itr--;
	}
	return (0);
}
