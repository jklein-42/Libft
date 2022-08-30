/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:38:59 by jklein            #+#    #+#             */
/*   Updated: 2021/10/23 16:31:48 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- it allocates the size of a string -- 
			 *			it will return the vaule of the string
			 * */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*str;
	int		byte;

	str = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
	byte = 0;
	if (str == NULL)
		return (NULL);
	while (s[byte] != '\0')
	{
		str[byte] = f(byte, s[byte]);
		++byte;
	}
	str[byte] = '\0';
	return (str);
}
