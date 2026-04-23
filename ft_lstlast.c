/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepatric <gepatric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:26:23 by gepatric          #+#    #+#             */
/*   Updated: 2026/04/23 18:38:00 by gepatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *new;

	if (!lst)
		return (NULL);
	new = lst; 
	while (new->next != NULL)
		new = new->next;
	return (new);
}
