/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepatric <gepatric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:01:39 by gepatric          #+#    #+#             */
/*   Updated: 2026/04/23 11:06:52 by gepatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isin(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	size_t	start;
	size_t	len;
	char	*strtrim;

	i = 0;
	start = 0;
	len = ft_strlen(s1);
	while (s1[start] && ft_isin(s1[start], set))
		start++;
	--len;
	while (len > 0 && ft_isin(s1[len], set))
		--len;
	strtrim = malloc(sizeof(char) * ((len - start) + 2));
	if (!strtrim)
		return (NULL);
	while (start <= len)
		strtrim[i++] = s1[start++];
	strtrim[i] = '\0';
	return (strtrim);
}
