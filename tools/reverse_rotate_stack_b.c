/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_stack_b.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:57:18 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 14:55:15 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

void	reverse_rotate_stack_b(t_list **stackb)
{
	t_list	*last;
	t_list	*second_last;

	if (ft_lstsize(*stackb) < 2)
		return ;
	last = *stackb;
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *stackb;
	*stackb = last;
	write(1, "rrb\n", 4);
}
