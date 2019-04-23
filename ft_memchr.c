/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <fokrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 18:36:04 by fokrober          #+#    #+#             */
/*   Updated: 2019/04/23 19:50:13 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char*)s;
	i = 0;
	while (n--)
	{
		if (p[i] == (unsigned char)c)
			return ((void*)(p + i));
		i++;
	}
	return (NULL);
}
