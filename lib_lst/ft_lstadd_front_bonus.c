/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:08:01 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 14:56:17 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
	else
	{
		*lst = new;
	}
}
