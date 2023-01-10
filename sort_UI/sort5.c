/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:27:03 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 15:26:55 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

void	stack_pusher_b(t_list **stacka, t_list **stackb, int content)
{
	int	size;
	int	index;

	while (ft_lstsize(*stackb))
	{
		size = ft_lstsize(*stackb);
		if (size == 1)
		{
			pushb(stacka, stackb);
			break ;
		}
		index = get_position(*stackb, content);
		if (index == 0)
		{
			pushb(stackb, stacka);
			break ;
		}
		if (index >= size / 2)
			reverse_rotate_stack_a(stackb);
		else
			rotate_a(stackb);
	}
}

int	get_min(t_list *stack)
{
	int		min;
	t_list	*tmp;

	tmp = stack;
	min = stack->content;
	while (tmp)
	{
		if (tmp->content < min)
		{
			min = tmp->content;
		}
		tmp = tmp->next;
	}
	return (min);
}

void	sort5(t_list **stacka, t_list **stackb)
{
	int	min;

	if (check_if_already_sorted(stacka) == 1)
		return ;
	while (ft_lstsize(*stacka) > 3)
	{
		min = get_min(*stacka);
		stack_pusher_b(stackb, stacka, min);
	}
	sort3(stacka);
	if (ft_lstsize(*stackb) == 3)
		sort3(stackb);
	if (ft_lstsize(*stackb) == 1)
	{
		pusha(stacka, stackb);
		return ;
	}
	if ((*stackb)->content < (*stackb)->next->content)
		swapb(stackb);
	while (ft_lstsize(*stackb))
		pusha(stacka, stackb);
}
