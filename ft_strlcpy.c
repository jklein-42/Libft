/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:31:43 by jklein            #+#    #+#             */
/*   Updated: 2021/11/01 19:05:26 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- size-bounded string copying and concatenation -- */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	strcpy;

	strcpy = 0;
	if (size > 0)
	{
		while (src[strcpy] && strcpy < (size - 1))
		{
			dst[strcpy] = src[strcpy];
			strcpy++;
		}
		dst[strcpy] = 0;
	}
	while (src[strcpy])
		strcpy++;
	return (strcpy);
}
