/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 09:57:02 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/14 09:32:19 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char l, char m, char r)
{
	int		j;

	j = 1;
	while (j <= x)
	{
		if (j == 1)
			ft_putchar(l);
		else if (j == x)
			ft_putchar(r);
		else
			ft_putchar(m);
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;

	i = 1;
	if (x <= 0 || y <= 0)
		return ;
	if (i == 1)
	{
		print_line(x, 'A', 'B', 'C');
		i++;
	}
	while (i > 1 && i < y)
	{
		print_line(x, 'B', ' ', 'B');
		i++;
	}
	if (i == y)
	{
		print_line(x, 'C', 'B', 'A');
		i++;
	}
}
