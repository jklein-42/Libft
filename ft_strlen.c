/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:29:17 by jklein            #+#    #+#             */
/*   Updated: 2021/11/01 19:02:07 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- find length of string -- */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	str;

	str = 0;
	while (s[str] != '\0')
	{
		str++;
	}
	return (str);
}