/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:58:56 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 21:22:29 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./included_libraries/swappush.h"

int	main(int ac, char **av)
{
	t_list	*stacka;
	t_list	*stackb;

	stacka = NULL;
	stackb = NULL;
	if (ac == 1)
		return (0);
	if (stack_init(&stacka, av) == 0)
		return (0);
	if (ft_lstsize(stacka) == 1)
		return (0);
	if (ft_lstsize(stacka) == 2)
	{
		if (stacka->content > stacka->next->content)
			swapa(&stacka);
	}
	else if (ft_lstsize(stacka) < 4)
		sort3(&stacka);
	else if (ft_lstsize(stacka) < 7)
		sort5(&stacka, &stackb);
	else if (ft_lstsize(stacka) <= 300)
		ultimate_sort(&stacka, &stackb, 4);
	else if (ft_lstsize(stacka) >= 300)
		ultimate_sort(&stacka, &stackb, 9);
	return (0);
}
