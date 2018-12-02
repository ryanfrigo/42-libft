/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 13:08:56 by rfrigo            #+#    #+#             */
/*   Updated: 2018/12/02 11:08:34 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	map = ft_strnew(ft_strlen(s));
	if (map == NULL)
		return (NULL);
	while (s[i])
	{
		map[i] = (*f)(i, s[i]);
		i++;
	}
	return (map);
}
