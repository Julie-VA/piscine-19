/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:37:15 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/21 21:07:47 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	printboard(int board[]);

int		checkrow(int item);

int		checkcol(int item);

int		maxcount(int tab[4], int view);

int		checkviewsrow(int board[16], int depth, int views[16])
{
	int tab[4];
	int i;
	int j;

	i = 0;
	j = checkrow(depth) * 4;
	while (i < 4)
		tab[i++] = board[j++];
	if (maxcount(tab, views[checkrow(depth) + 8]))
	{
		i = 0;
		j = (checkrow(depth) * 4) + 3;
		while (i < 4)
			tab[i++] = board[j--];
		if (maxcount(tab, views[checkrow(depth) + 12]))
			return (1);
	}
	return (0);
}

int		checkviewscol(int board[16], int depth, int views[16])
{
	int tab[4];
	int i;
	int j;

	i = 0;
	j = checkcol(depth);
	while (i < 4)
	{
		tab[i++] = board[j];
		j += 4;
	}
	if (maxcount(tab, views[checkcol(depth)]))
	{
		i = 0;
		j = checkcol(depth) + 12;
		while (i < 4)
		{
			tab[i++] = board[j];
			j -= 4;
		}
		if (maxcount(tab, views[checkcol(depth) + 4]))
			return (1);
	}
	return (0);
}

int		checkvalid(int board[16], int depth, int views[16])
{
	int i;

	i = checkrow(depth) * 4;
	while (i < depth)
	{
		if (board[depth] == board[i])
			return (0);
		i++;
	}
	i = checkcol(depth);
	while (i < depth)
	{
		if (board[depth] == board[i])
			return (0);
		i += 4;
	}
	if (depth == 3 || depth == 7 || depth == 11 || depth == 15)
		if (checkviewsrow(board, depth, views) == 0)
			return (0);
	if (depth == 12 || depth == 13 || depth == 14 || depth == 15)
		if (checkviewscol(board, depth, views) == 0)
			return (0);
	return (1);
}

int		solve(int board[16], int depth, int views[16])
{
	int t;

	if (depth == 16)
	{
		printboard(board);
		return (1);
	}
	t = 1;
	while (t <= 4)
	{
		board[depth] = t;
		if (checkvalid(board, depth, views))
			if (solve(board, depth + 1, views))
				return (1);
		t++;
	}
	return (0);
}
