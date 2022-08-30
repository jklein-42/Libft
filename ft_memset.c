/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:30:15 by jklein            #+#    #+#             */
/*   Updated: 2021/11/01 19:02:49 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- fill a byte string with a value -- */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)

{	
	char	*strlen;
	size_t	strcpy;

	strlen = (char *)str;
	strcpy = 0;
	while (strcpy < len)
	{
		strlen[strcpy] = (unsigned char)c;
		strcpy++;
	}
	return (str);
}
