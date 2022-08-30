/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:41:47 by jklein            #+#    #+#             */
/*   Updated: 2021/11/01 19:11:47 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- compear byte string -- */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptrstack;
	size_t	str;
	size_t	strlen;
	size_t	byte;

	ptrstack = (char *)haystack;
	if (needle[0] == '\0')
		return (ptrstack);
	byte = 0;
	str = len;
	strlen = (size_t)ft_strlen(needle);
	while (*ptrstack && str >= strlen)
	{
		if (*ptrstack == *needle)
		{
			if (ft_strncmp(needle, ptrstack, strlen) == 0)
				return (ptrstack);
		}
		byte++;
		str--;
		ptrstack++;
	}
	return (NULL);
}
