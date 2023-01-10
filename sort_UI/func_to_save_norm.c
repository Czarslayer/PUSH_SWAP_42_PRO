/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_to_save_norm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:10:30 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 14:52:14 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

void	push_and_rotate_b(t_list **stacka, t_list **stackb)
{
	pushb(stacka, stackb);
	rotate_b(stackb);
}

void	stacka_fixer(t_list **stacka)
{
	if ((*stacka) && (*stacka)->next)
	{
		if ((*stacka)->content > (*stacka)->next->content)
		{
			swapa(stacka);
		}
	}
}

void	stack_pusher_a(t_list **stacka, t_list **stackb, int content)
{
	int	size;
	int	index;

	stacka_fixer(stacka);
	while (ft_lstsize(*stackb))
	{
		size = ft_lstsize(*stackb);
		if (size == 1)
		{
			pusha(stacka, stackb);
			break ;
		}
		index = get_position(*stackb, content);
		if (index == 0)
		{
			pusha(stacka, stackb);
			break ;
		}
		if (index >= size / 2)
			reverse_rotate_stack_b(stackb);
		else
			rotate_b(stackb);
	}
	stacka_fixer(stacka);
}
