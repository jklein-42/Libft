/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:27:13 by jklein            #+#    #+#             */
/*   Updated: 2021/10/23 16:39:30 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- uses the function to write a string -- */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	str;

	str = 0;
	while (s[str] != '\0')
	{
		write(fd, &s[str], 1);
		++str;
	}
}
