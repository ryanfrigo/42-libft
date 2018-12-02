/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 13:08:56 by rfrigo            #+#    #+#             */
/*   Updated: 2018/11/28 15:35:15 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	ptr2 = dst;
	ptr1 = (char *)src;
	i = 0;
	while (i < n)
	{
		*(ptr2 + i) = *(ptr1 + i);
		i++;
	}
	return (dst);
}
