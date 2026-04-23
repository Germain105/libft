/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepatric <gepatric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:48:12 by gepatric          #+#    #+#             */
/*   Updated: 2026/04/23 11:37:42 by gepatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_nblen(long int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	{
		nb = -nb;
		len++;
	}
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*number;

	nb = n;
	len = ft_nblen(nb);
	number = malloc(sizeof(char) * (len + 1));
	if (!number)
		return (NULL);
	if (nb == 0)
		number[0] = '0';
	if (nb < 0)
	{
		number[0] = '-';
		nb = -nb;
	}
	number[len] = '\0';
	while (nb > 0)
	{
		number[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (number);
}
