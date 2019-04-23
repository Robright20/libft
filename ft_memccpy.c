/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <fokrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 04:51:39 by fokrober          #+#    #+#             */
/*   Updated: 2019/04/23 16:05:42 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (*((unsigned char*)src + i) != (unsigned char)c && n)
	{
		*((unsigned char*)dst + i) = *((unsigned char*)src + i);
		i++;
		n--;
	}
	if (*((unsigned char*)src + i) == (unsigned char)c)
	{
		*((unsigned char*)dst + i) = *((unsigned char*)src + i);
		return ((void*)dst + i + 1);
	}
	return (NULL);
}
