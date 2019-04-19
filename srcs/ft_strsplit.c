/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 13:52:10 by fokrober          #+#    #+#             */
/*   Updated: 2019/04/19 15:21:40 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;

	i = 0;
	tab = ft_memalloc(sizeof(char*));
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			tab = ft_push_str(tab, ft_strsub(s, j, (i - j)));
		}
		if (!s[i])
			break;
		i++;
	}
	return (tab);
}
