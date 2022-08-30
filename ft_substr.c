/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:26:37 by jklein            #+#    #+#             */
/*   Updated: 2021/10/23 15:13:17 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- returns the maximum size of a string  -- */

		/* -- this functin uses malloc -- */
			/* -- the length and maximum size of the len variable -- */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	str;

	if ((start >= (unsigned int) ft_strlen(s)) || len == 0)
		return (ft_strdup(""));
	sub = (char *) malloc (sizeof(char) * (len + 1));
	str = 0;
	if (sub == NULL)
		return (NULL);
	while (s[start + str] != '\0' && str < len)
	{
		sub[str] = s[start + str];
		str++;
	}
	sub[str] = '\0';
	return (sub);
}
