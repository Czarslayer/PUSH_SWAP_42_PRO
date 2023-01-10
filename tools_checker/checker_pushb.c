/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_pushb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:57:01 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 14:45:57 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

void	checker_pushb(t_list **stacka, t_list **stackb)
{
	t_list	*temp;

	if (ft_lstsize(*stacka) < 1)
		return ;
	temp = *stacka;
	*stacka = (*stacka)->next;
	temp->next = *stackb;
	*stackb = temp;
}
