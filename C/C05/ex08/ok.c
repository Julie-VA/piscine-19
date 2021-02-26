/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:28:28 by jvilla-m          #+#    #+#             */
/*   Updated: 2021/02/20 16:01:38 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_move_legal(char *board, int depth, char c)
{
	int i;

	i = -1;
	while (++i < depth)
		if (board[i] == c || board[i] == c + (depth - i) ||
			board[i] == c - (depth - i))
			return (0);
	return (1);
}

int		advance_board(char *board, int depth)
{
	char	c;
	int		counter;

	if (depth == 10)
		return (write(1, board, 11) ? 1 : 1);
	counter = 0;
	c = '0' - 1;
	while (++c <= '9')
		if (check_move_legal(board, depth, board[depth] = c))
			counter += advance_board(board, depth + 1);
	return (counter);
}

int		ft_ten_queens_puzzle(void)
{
	char	s_board[11];

	s_board[10] = '\n';
	return (advance_board(s_board, 0));
}

#include <stdio.h>

int main()
{
	int i;
	
	i = ft_ten_queens_puzzle();
	printf("%d", i);
}