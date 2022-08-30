/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:52:04 by jklein            #+#    #+#             */
/*   Updated: 2021/11/01 19:04:15 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- copy memory area -- */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, int n)
{
	int	byte;

	if (n == '0' || (dst == NULL && src == NULL))
		return (NULL);
	byte = 0;
	while (byte < n)
	{
		*(char *)(dst + byte) = *(char *)(src + byte);
		byte++;
	}
	return (dst);
}
