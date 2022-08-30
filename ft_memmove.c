/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:31:20 by jklein            #+#    #+#             */
/*   Updated: 2021/11/01 19:04:40 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- copy byte string --*/

#include "libft.h"

void	*ft_memmove(char *dst, char *src, size_t len)
{
	int	byte;

	if (dst > src)
	{
		byte = len - 1;
		while (byte >= 0)
		{
			dst[byte] = src[byte];
			byte--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
