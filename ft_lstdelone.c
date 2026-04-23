/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gepatric <gepatric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:23:14 by gepatric          #+#    #+#             */
/*   Updated: 2026/04/23 18:11:39 by gepatric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    del(lst->content); 
    free(lst); 
}