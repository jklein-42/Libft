/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:07:49 by jklein            #+#    #+#             */
/*   Updated: 2021/10/23 16:42:57 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- using the char and the int to create a byte string --*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	byte;

	byte = 0;
	while (s[byte] != '\0')
	{
		write(fd, &s[byte], 1);
		byte++;
	}
	write(fd, "\n", 1);
}
