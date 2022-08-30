/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:42:27 by jklein            #+#    #+#             */
/*   Updated: 2021/11/01 18:45:15 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- convert ASCII string to integer -- */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	coefficient;
	int	output;

	num = 0;
	output = 0;
	while (str[num] == 32 || str[num] == '\n' || str[num] == '\t'
		|| str[num] == '\v' || str[num] == '\f' || str[num] == '\r')
		num++;
	if (str[num] == '-')
	{
		coefficient = -1;
		num++;
	}
	else if (str[num] == '+')
		num++;
	while (str[num] >= 48 && str[num] <= 57)
	{
		output = output * 10 + (str[num] - '0');
		num++;
	}
	if (coefficient == -1)
		output = -output;
	return (output);
}
