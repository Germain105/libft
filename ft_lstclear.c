/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: germainp <germainp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:23:32 by gepatric          #+#    #+#             */
/*   Updated: 2026/04/24 00:28:50 by germainp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *current; 
    t_list *next; 
    
    if (!lst || !del)
        return ; 
    current = *lst; 
    while (current)
    {
        next = current->next; 
        del(current->content);
        free(current); 
        current = next;       
    }
    *lst = NULL; 
}