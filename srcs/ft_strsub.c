/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 00:37:46 by fokrober          #+#    #+#             */
/*   Updated: 2019/04/12 13:14:42 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char 	*str;
	int 	i;

	str = ft_strnew(len);
	i = 0;
	while (start < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	return (str);
}
