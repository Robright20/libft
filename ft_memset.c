/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 02:56:08 by fokrober          #+#    #+#             */
/*   Updated: 2019/04/23 14:39:14 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned long i;
	unsigned char *pntr;

	i = 0;
	pntr = (unsigned char *)ptr;
	while (i < len)
	{
		pntr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
