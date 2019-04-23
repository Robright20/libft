/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 22:53:05 by fokrober          #+#    #+#             */
/*   Updated: 2019/04/23 14:50:10 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_push_str(char **tab, char *s)
{
	size_t i;

	i = 0;
	while (tab[i])
		i++;
	tab[i] = s;
	tab = (char**)ft_realloc(tab, (i + 1) * sizeof(char*),
		(i + 2) * sizeof(char*));
	tab[i + 1] = NULL;
	return (tab);
}
