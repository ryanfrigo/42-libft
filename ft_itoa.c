/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 13:08:56 by rfrigo            #+#    #+#             */
/*   Updated: 2018/12/01 16:30:36 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		num;

	len = ft_intlen(n);
	num = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		num = -n;
		len++;
	}
	if (!(res = ft_strnew(len)))
		return (NULL);
	res[--len] = num % 10 + '0';
	while (num /= 10)
		res[--len] = num % 10 + '0';
	if (n < 0)
		*(res + 0) = '-';
	return (res);
}
