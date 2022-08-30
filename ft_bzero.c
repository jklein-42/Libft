/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:41:27 by jklein            #+#    #+#             */
/*   Updated: 2021/11/01 19:03:33 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- write zeroes to a byte string -- */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			byte;

	str = (unsigned char *) s;
	byte = 0;
	if (n > 0)
	{
		while (byte < n)
		{
			str[byte] = '\0';
			byte++;
		}
	}
}
