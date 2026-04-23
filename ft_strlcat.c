/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepatric <gepatric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:17:01 by gepatric          #+#    #+#             */
/*   Updated: 2026/04/23 13:48:07 by gepatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (n > 0)
	{
		while (dst[i] && i < n)
			i++;
		while (src[j] && (i + j) < n - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
		if ((i + j) < n)
			dst[i + j] = '\0';
	}
	return (ft_strlen(src) + i);
}
