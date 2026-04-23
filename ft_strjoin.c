/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepatric <gepatric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:57:22 by gepatric          #+#    #+#             */
/*   Updated: 2026/04/23 11:02:48 by gepatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		j;
	int		i;
	char	*strjoin;

	j = 0;
	strjoin = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!strjoin)
		return (NULL);
	i = 0;
	while (s1[i])
		strjoin[j++] = s1[i++];
	i = 0;
	while (s2[i])
		strjoin[j++] = s2[i++];
	strjoin[j] = '\0';
	return (strjoin);
}
