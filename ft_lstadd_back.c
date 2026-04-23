/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepatric <gepatric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:30:36 by gepatric          #+#    #+#             */
/*   Updated: 2026/04/23 18:34:38 by gepatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;  
}
