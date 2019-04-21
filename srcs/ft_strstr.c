/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <fokrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 03:39:53 by fokrober          #+#    #+#             */
/*   Updated: 2019/04/20 19:28:57 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(needle);
	i = 0;
	while (haystack[i] && !ft_strnequ(&haystack[i], needle, len))
		i++;
	if (ft_strnequ(&haystack[i], needle, len))
		return (((char*)haystack) + i);
	return (NULL);
}