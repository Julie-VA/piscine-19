/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 11:20:26 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/23 12:36:24 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		checkvalid(char c, char *board, int depth)
{
	int i;

	i = 0;
	while (i < depth)
	{
		if (board[i] == c || board[i] == c + (depth - i)
		|| board[i] == c - (depth - i))
			return (0);
		i++;
	}
	return (1);
}

int		nextcol(char *board, int depth)
{
	char	c;
	int		counter;

	if (depth == 10)
	{
		write(1, board, 10);
		write(1, "\n", 1);
		return (1);
	}
	counter = 0;
	c = '0';
	while (c <= '9')
	{
		board[depth] = c;
		if (checkvalid(c, board, depth) == 1)
			counter += nextcol(board, depth + 1);
		c++;
	}
	return (counter);
}

int		ft_ten_queens_puzzle(void)
{
	char	board[11];
	int		i;

	i = nextcol(board, 0);
	return (i);
}
