/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:37:18 by jklein            #+#    #+#             */
/*   Updated: 2021/11/01 19:10:00 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- locate character in string -- */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		strlen;

	strlen = ft_strlen(s);
	ptr = (char *)s + strlen - 1;
	if (c == '\0')
	{
		ptr++;
		return (ptr);
	}
	while (strlen != 0)
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		strlen--;
		ptr--;
	}
	return (NULL);
}
