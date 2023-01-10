/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_pusha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:56:54 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 14:45:44 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

void	checker_pusha(t_list **stacka, t_list **stackb)
{
	t_list	*temp;

	if (ft_lstsize(*stackb) < 1)
		return ;
	temp = *stackb;
	*stackb = (*stackb)->next;
	temp->next = *stacka;
	*stacka = temp;
}
