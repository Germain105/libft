/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepatric <gepatric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:36:03 by gepatric          #+#    #+#             */
/*   Updated: 2026/04/23 16:33:08 by gepatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t n, size_t size)
{
	size_t	i;
	void	*calloc;

	i = 0;
	calloc = (void *)malloc(n * size);
	if (!calloc)
		return (NULL);
	while (i < n)
		((unsigned char *)calloc)[i++] = 0;
	return (calloc);
}
