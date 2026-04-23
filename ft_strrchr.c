/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: germainp <germainp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:39:01 by gepatric          #+#    #+#             */
/*   Updated: 2026/04/23 22:40:46 by germainp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		--i;
	}
	return (NULL);
}
