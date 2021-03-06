/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <fokrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 23:29:04 by fokrober          #+#    #+#             */
/*   Updated: 2019/05/04 15:29:06 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_push_char(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	s[i] = c;
	s = (char*)ft_realloc(s, (i + 1) * sizeof(char), (i + 2) * sizeof(char));
	s[i + 1] = '\0';
	return (s);
}
