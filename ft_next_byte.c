/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_byte.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <fokrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 01:03:45 by fokrober          #+#    #+#             */
/*   Updated: 2019/04/23 14:47:43 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_next_byte(const void *s)
{
	return ((void*)((char*)s + 1));
}
