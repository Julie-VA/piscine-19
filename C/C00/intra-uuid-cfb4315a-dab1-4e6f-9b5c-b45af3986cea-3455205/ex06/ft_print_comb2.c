/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:36:47 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/10 12:43:59 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writer_a(int a)
{
	char a1;
	char a2;

	a1 = a / 10 + '0';
	a2 = a % 10 + '0';
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
}

void	writer_b(int b)
{
	char b1;
	char b2;

	b1 = b / 10 + '0';
	b2 = b % 10 + '0';
	write(1, &b1, 1);
	write(1, &b2, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	comma;
	char	space;

	a = 0;
	comma = ',';
	space = ' ';
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			writer_a(a);
			writer_b(b);
			if (a == 98 && b == 99)
			{
				break ;
			}
			write(1, &comma, 1);
			write(1, &space, 1);
			b++;
		}
		a++;
	}
}
