/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:37:20 by jklein            #+#    #+#             */
/*   Updated: 2021/11/01 18:54:59 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- the function will create a string dealling with numbers -- */
				/* -- the integer returns a byte size number -- */

#include "libft.h"

int	ft_count(int n)
{
	int	count;
	int	num;

	count = 1;
	if (n < 0)
	{
		num = -n;
		count++;
	}
	else
		num = n;
	if (n == 0)
		count = 2;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

			/* -- the string vaule will return from the int -- 
			 *			this function uses the ft_count to create a byte string
			 * */

char	*ft_itoa(int n)
{
	int				i;
	char			*str;
	unsigned int	nbr;

	i = ft_count(n);
	str = (char *) malloc(sizeof(char) * i);
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	str[--i] = '\0';
	while (nbr != 0)
	{
		str[i - 1] = ((nbr % 10) + '0');
		nbr = nbr / 10;
		i--;
	}
	return (str);
}
