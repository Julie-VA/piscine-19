/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:28:36 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/25 14:28:37 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int itr;

	itr = 0;
	while (str[itr] != '\0')
	{
		write(1, &str[itr], 1);
		itr++;
	}
}
