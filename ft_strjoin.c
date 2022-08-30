/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:28:21 by jklein            #+#    #+#             */
/*   Updated: 2021/11/11 12:01:50 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- this function will allocate strings -- */
		/* -- the concatenation will effect the variable s1 & s2 -- */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		strcpy;
	int		strlen;
	char	*str;

	strcpy = 0;
	strlen = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[strcpy] != '\0')
	{
		str[strcpy] = s1[strcpy];
		strcpy++;
	}
	while (s2[strlen] != '\0')
	{
		str[strcpy + strlen] = s2[strlen];
		strlen++;
	}
	str[strcpy + strlen] = '\0';
	return (str);
}
