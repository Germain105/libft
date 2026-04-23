/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepatric <gepatric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:08:52 by gepatric          #+#    #+#             */
/*   Updated: 2026/04/23 10:59:50 by gepatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlenlen(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

int	ft_count_word(const char *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && !flag)
		{
			flag = 1;
			count++;
		}
		else if (*s == c && flag)
			flag = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = -1;
	j = 0;
	split = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!split)
		return (NULL);
	while (++i < ft_count_word(s, c))
	{
		k = 0;
		while (s[j] == c)
			j++;
		split[i] = malloc(sizeof(char) * (ft_strlenlen(s + j, c) + 1));
		if (!split[i])
			return (NULL);
		while (s[j] && s[j] != c)
			split[i][k++] = s[j++];
		split[i][k] = '\0';
	}
	split[i] = NULL;
	return (split);
}
