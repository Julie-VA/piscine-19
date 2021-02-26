/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:14:46 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/02/17 15:40:42 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int it;

	it = 0;
	if (n == 0)
		return (0);
	while (it < n - 1 && s1[it] == s2[it] && s1[it] != '\0' && s2[it] != '\0')
		it++;
	if (s1[it] != s2[it])
		return (s1[it] - s2[it]);
	else
		return (0);
}
