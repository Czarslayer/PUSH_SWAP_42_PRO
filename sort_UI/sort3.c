/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:26:11 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 14:50:07 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

void	bnn(t_list **stacka)
{
	if ((*stacka)->next->content > (*stacka)->next->next->content)
	{
		rotate_a(stacka);
		swapa(stacka);
	}
	else
		rotate_a(stacka);
}

void	nbn(t_list **stacka)
{
	if ((*stacka)->content > (*stacka)->next->next->content)
		reverse_rotate_stack_a(stacka);
	else
	{
		reverse_rotate_stack_a(stacka);
		swapa(stacka);
	}
}

void	nnb(t_list **stacka)
{
	if ((*stacka)->content > (*stacka)->next->content)
		swapa(stacka);
}

void	sort3(t_list **stacka)
{
	int	content;
	int	position;

	if (check_if_already_sorted(stacka) == 1)
		return ;
	content = get_max(*stacka);
	position = get_position(*stacka, content);
	if (position == 2)
		nnb(stacka);
	else if (position == 1)
		nbn(stacka);
	else if (position == 0)
		bnn(stacka);
}
