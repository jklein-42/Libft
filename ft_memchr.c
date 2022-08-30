/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:39:07 by jklein            #+#    #+#             */
/*   Updated: 2021/11/01 19:10:51 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- locate byte in byte string -- */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	byte;

	byte = 0;
	while (byte < n)
	{
		if (((unsigned char *)s)[byte] == (unsigned char)c)
			return (((unsigned char *)s) + byte);
		byte++;
	}
	return (NULL);
}
