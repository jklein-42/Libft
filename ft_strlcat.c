/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:32:18 by jklein            #+#    #+#             */
/*   Updated: 2021/11/01 19:06:12 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- size-bounded string copying and concatenation -- */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t maxsize)
{
	size_t	dstsize;
	size_t	srcsize;

	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	if (dstsize > maxsize)
	{
		dstsize = maxsize;
	}
	if (dstsize == maxsize || maxsize == 0)
	{
		return (dstsize + srcsize);
	}
	if (srcsize < maxsize - dstsize)
	{
		ft_memcpy(dst + dstsize, src, srcsize + 1);
	}
	else
	{
		ft_memcpy(dst + dstsize, src, maxsize - dstsize - 1);
		dst[maxsize - 1] = '\0';
	}
	return (dstsize + srcsize);
}
