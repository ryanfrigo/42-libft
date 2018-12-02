/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:59:39 by rfrigo            #+#    #+#             */
/*   Updated: 2018/12/01 19:18:28 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	while (i < size)
	{
		ptr2[i] = ptr1[i];
		if (ptr1[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
