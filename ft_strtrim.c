/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:33:03 by jklein            #+#    #+#             */
/*   Updated: 2021/10/23 15:26:11 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- this function will have a value of a string -- */

	/* -- using the string functions this script will allocate s1 variable -- */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		str;
	char	*trim;

	str = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	if (set == NULL)
		return (ft_strdup(s1));
	while ((s1[start] != '\0') && (ft_strchr(set, s1[start]) != NULL))
		start++;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	trim = (char *)malloc(sizeof(char) * (end - start + 2));
	if (trim == NULL)
		return (NULL);
	while (str <= end - start)
	{
		trim[str] = s1[start + str];
		str++;
	}
	trim[str] = '\0';
	return (trim);
}
