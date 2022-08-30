/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:37:58 by jklein            #+#    #+#             */
/*   Updated: 2021/11/01 19:10:29 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- compare string -- */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	str;

	if (n == 0)
		return (0);
	str = 0;
	while (s1[str] == s2[str] && s1[str] != '\0' && str < (n - 1))
	{
		str++;
	}
	return ((unsigned char)s1[str] - (unsigned char)s2[str]);
}
