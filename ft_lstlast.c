/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: germainp <germainp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:26:23 by gepatric          #+#    #+#             */
/*   Updated: 2026/04/24 00:36:30 by germainp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *new;

	if (!lst)
		return (NULL);
	new = lst; 
	while (new->next)
		new = new->next;
	return (new);
}
