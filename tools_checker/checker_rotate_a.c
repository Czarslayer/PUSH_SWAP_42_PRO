/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:57:24 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 14:46:28 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

void	checker_rotate_a(t_list **stacka)
{
	t_list	*temp;

	if (*stacka && (*stacka)->next)
	{
		temp = *stacka;
		ft_lstadd_back(stacka, ft_lstnew(temp->content));
		*stacka = (*stacka)->next;
		free(temp);
	}
}
