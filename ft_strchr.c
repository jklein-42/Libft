/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:36:51 by jklein            #+#    #+#             */
/*   Updated: 2021/11/01 19:09:15 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- locate character in string -- */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	chr;

	chr = 0;
	while (s[chr])
	{
		if (s[chr] == (char)c)
			return ((char *)(s + chr));
		chr++;
	}	
	if (s[chr] == (char)c)
		return ((char *)(s + chr));
	return (NULL);
}
