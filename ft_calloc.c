/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:09:37 by jklein            #+#    #+#             */
/*   Updated: 2021/10/21 17:59:18 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- memory allocation -- */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*byte;

	byte = malloc(count * size);
	if (byte == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_bzero(byte, count * size);
	return (byte);
}
