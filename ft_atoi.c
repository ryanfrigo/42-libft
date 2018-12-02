/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 13:08:25 by rfrigo            #+#    #+#             */
/*   Updated: 2018/12/02 15:22:32 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			i;
	long int	result;
	long int	neg;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\v' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\t' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (result * neg);
		else
			result = (result * 10) + (long int)(str[i] - '0');
		i++;
	}
	return (result * neg);
}
