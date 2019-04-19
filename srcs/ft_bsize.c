/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 23:33:48 by fokrober          #+#    #+#             */
/*   Updated: 2019/04/15 17:39:27 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_bsize(void *ptr)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;

	if (!((char*)ptr))
		return (0);
	while (*((char*)ptr + i))
	{
		len += sizeof(ptr[i]);
		if (!((char*)ptr + (i + 1)))
			return (len + 1);
		i++;
	}
	return (len + 1);
}
