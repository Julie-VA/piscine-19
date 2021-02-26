/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 21:01:54 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/21 21:06:31 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		solve(int board[16], int depth, int views[16]);

int		main(int argc, char **argv)
{
	int board[16];
	int i;
	int	itr;
	int views[16];

	itr = 0;
	while (argv[1][itr] != '\0')
		itr++;
	if (itr != 31 || argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = -1;
	while (++i < 16)
		board[i] = 0;
	i = -1;
	while (++i < 16)
		views[i] = argv[1][i * 2] - '0';
	if (solve(board, 0, views) == 0)
		write(1, "Error\n", 6);
	return (0);
}
