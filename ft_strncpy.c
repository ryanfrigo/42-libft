/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 13:08:56 by rfrigo            #+#    #+#             */
/*   Updated: 2018/12/01 17:32:42 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t		strlen;
	size_t		i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	strlen = ft_strlen((char*)src);
	while (i < n)
	{
		if (i > strlen)
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
