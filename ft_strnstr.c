/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepatric <gepatric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:14:55 by gepatric          #+#    #+#             */
/*   Updated: 2026/04/23 16:28:19 by gepatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0' || !little)
		return ((char *)big);
	while (big[i] && j < len)
	{
		while (big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		j = 0;
		i++;
	}
	return (NULL);
}
