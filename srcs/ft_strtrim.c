/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:35:13 by fokrober          #+#    #+#             */
/*   Updated: 2019/04/13 00:28:48 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (ft_strchr(" \n\t", s[i]))
		i++;
	len = ft_strlen(s);
	while (ft_strchr(" \n\t", s[--len]));
	return (ft_strsub(s, i, len - i + 1));
}
