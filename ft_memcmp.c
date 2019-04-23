/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <fokrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 19:41:01 by fokrober          #+#    #+#             */
/*   Updated: 2019/04/23 16:22:51 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((*((unsigned char*)s1 + i) == *((unsigned char*)s2 + i)) && --n)
		i++;
	return (*((unsigned char*)s1 + i) - *((unsigned char*)s2 + i));
}
