/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <fokrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 03:44:47 by fokrober          #+#    #+#             */
/*   Updated: 2019/04/21 04:06:42 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int		i;

	i = 0;
	while ((dst[i] || src[i]) && len--)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}