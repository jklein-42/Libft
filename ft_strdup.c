/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:24:12 by jklein            #+#    #+#             */
/*   Updated: 2021/10/21 18:07:05 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- save a copy of a string -- */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (ptr == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	return ((char *)ft_memcpy(ptr, s1, ft_strlen(s1) + 1));
}
