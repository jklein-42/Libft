/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:03:25 by jklein            #+#    #+#             */
/*   Updated: 2021/10/23 16:34:32 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- use a character output to write a integer -- */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}