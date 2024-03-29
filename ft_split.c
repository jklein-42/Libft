/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:35:27 by jklein            #+#    #+#             */
/*   Updated: 2021/11/11 15:13:36 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/* -- this split function will allocate arrays -- */
		/* -- the program will first conunt the string -- */

			/* -- the malloc will then use a value -- */

		/* -- the function splits a string -- */
			/* -- the byte of the string will free -- */

					/* -- splits the string -- */

#include "libft.h"

static	int	ft_strcount(char const *s, char c)
{
	int	num;
	int	count;

	if (s == 0 || s[0] == 0)
		return (0);
	num = 1;
	count = 0;
	if (s[0] != c)
		count++;
	while (s[num] != '\0')
	{
		if (s[num] != c && s[num - 1] == c)
			count++;
		num++;
	}
	return (count);
}

			/* -- the malloc function will allocate the byte of a string -- */
					/* -- the string will count -- */

static char	**ft_malloc(char const *s, char c)
{
	int		len;
	char	**str;

	if (s == NULL)
		return (NULL);
	len = ft_strcount(s, c);
	str = malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	return (str);
}

			/* -- the function will create strings -- */

static int	ft_nextword(char const *s, char c, int i)
{
	int	count;

	count = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0' && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

			/* -- the bytes of the string are being freed -- */

static char	**ft_free(char **str, int i)
{
	int	byte;

	byte = 0;
	while (byte < i && str[byte] != 0)
	{
		free(str[byte]);
		byte++;
	}
	free(str);
	return (0);
}

			/* -- the strings are being split -- */

		/* -- each string is being allicated by a byte --
		 * the byte is being prototyped by the functions in this script --
		 *     */

char	**ft_split(char const *s, char c)
{
	int		string00;
	int		string01;
	int		string02;
	char	**str;

	string00 = 0;
	string01 = -1;
	str = ft_malloc(s, c);
	if (!str)
		return (NULL);
	while (++string01 < ft_strcount(s, c))
	{
		string02 = 0;
		str[string01] = malloc(ft_nextword(s, c, string00) + 1);
		if (!(str[string01]))
			return (ft_free(str, string01));
		while (s[string00] != '\0' && s[string00] == c)
			string00++;
		while (s[string00] != '\0' && s[string00] != c)
			str[string01][string02++] = s[string00++];
		str[string01][string02] = '\0';
	}
	str[string01] = NULL;
	return (str);
}
