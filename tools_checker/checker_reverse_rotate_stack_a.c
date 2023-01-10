/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_reverse_rotate_stack_a.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:57:08 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 14:46:01 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

void	checker_reverse_rotate_stack_a(t_list **stacka)
{
	t_list	*last;
	t_list	*second_last;

	if (ft_lstsize(*stacka) < 2)
		return ;
	last = *stacka;
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *stacka;
	*stacka = last;
}
