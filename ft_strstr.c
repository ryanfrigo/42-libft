/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:57:41 by rfrigo            #+#    #+#             */
/*   Updated: 2018/11/28 14:58:44 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char *ptr;
	char *ptr2;

	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1)
	{
		ptr = (char *)s1;
		ptr2 = (char *)s2;
		while (*ptr2 && *ptr == *ptr2)
		{
			ptr++;
			ptr2++;
		}
		if (*ptr2 == '\0')
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
