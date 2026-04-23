/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: germainp <germainp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:23:45 by gepatric          #+#    #+#             */
/*   Updated: 2026/04/24 00:35:14 by germainp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *current; 

    if (!lst || !f)
        return ;
    current = lst; 
    while (current)
    {
        f(current->content);
        current = current->next;  
    }
}