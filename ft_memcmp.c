/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:38:34 by jklein            #+#    #+#             */
/*   Updated: 2021/11/01 19:11:23 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- compare byte string -- */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			byte;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	byte = 0;
	while (byte < n)
	{
		if (str1[byte] != str2[byte])
		{
			return (str1[byte] - str2[byte]);
		}
		byte++;
	}
	return (0);
}
