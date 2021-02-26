/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01 full.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:37:15 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/22 10:25:30 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	printboard(int board[])
{
	int i;
	int c;

	i = 0;
	while (i < 16)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		i++;
		if (i % 4 == 0)
			write(1, "\n", 1);
	}
}

int		checkrow(int item)
{
	int result;

	result = item / 4;
	return (result);
}

int		checkcol(int item)
{
	int result;

	result = item % 4;
	return (result);
}

int		maxcount(int tab[4], int view)
{
	int i;
	int max;
	int counter;

	counter = 1;
	i = 1;
	max = tab[0];
	while (i < 4)
	{
		if (tab[i] > max)
		{
			max = tab[i];
			counter++;	
		}
		i++;
	}
	if (counter == view)
		return (1);
	return (0);
}

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
				return(1);
		t++;
	}
	return (0);
}

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
