/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_searcher.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:12:56 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 14:51:24 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

int	get_position(t_list *stack, int content)
{
	int		position;
	t_list	*tmp;

	tmp = stack;
	position = 0;
	while (tmp)
	{
		if (tmp->content == content)
		{
			return (position);
		}
		tmp = tmp->next;
		position++;
	}
	return (position);
}

int	get_max(t_list *stack)
{
	int		max;
	t_list	*tmp;

	tmp = stack;
	max = stack->content;
	while (tmp)
	{
		if (tmp->content > max)
		{
			max = tmp->content;
		}
		tmp = tmp->next;
	}
	return (max);
}

int	get_max2(t_list *stack, int max)
{
	int		max2;
	t_list	*tmp;

	if (ft_lstsize(stack) == 1)
		return (0);
	tmp = stack;
	max2 = stack->content;
	if (stack->content == max)
		max2 = stack->next->content;
	while (tmp)
	{
		if (tmp->content > max2 && tmp->content < max)
		{
			max2 = tmp->content;
		}
		tmp = tmp->next;
	}
	return (max2);
}

int	closest_to_sort_exit(t_list **stackb, int content1, int content2)
{
	int	distancefront;
	int	distancelast;
	int	size;
	int	position1;
	int	position2;

	position1 = get_position(*stackb, content1);
	position2 = get_position(*stackb, content2);
	distancelast = 0;
	distancefront = 0;
	size = ft_lstsize(*stackb);
	if (position1 < size / 2)
		distancefront = position1 + 1;
	else
		distancefront = size - position1;
	if (position2 < size / 2)
		distancelast = position2 + 1;
	else
		distancelast = size - position2;
	if (distancefront < distancelast)
		return (content1);
	else if (distancefront == distancelast)
		return (content1);
	else
		return (content2);
}

void	sort(t_list **stacka, t_list **stackb)
{
	int	winmax;
	int	size;
	int	max1;
	int	max2;

	size = ft_lstsize(*stackb);
	while (ft_lstsize(*stackb))
	{
		max1 = get_max(*stackb);
		max2 = get_max2(*stackb, max1);
		winmax = closest_to_sort_exit(stackb, max1, max2);
		if (winmax == max1)
			stack_pusher_a(stacka, stackb, max1);
		else
		{
			stack_pusher_a(stacka, stackb, max2);
			stack_pusher_a(stacka, stackb, max1);
		}
	}
}
