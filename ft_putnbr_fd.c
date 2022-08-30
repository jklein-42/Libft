/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:10:36 by jklein            #+#    #+#             */
/*   Updated: 2021/10/23 16:45:17 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- us the file descriptor to write a integer output  -- */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	var;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		var = -n;
	}
	else
	{
		var = n;
	}
	if (var >= 10)
	{
		ft_putnbr_fd((var / 10), fd);
	}
	ft_putchar_fd((var % 10 + 48), fd);
}
