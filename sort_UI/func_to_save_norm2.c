/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_to_save_norm2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:10:30 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 14:52:16 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

int	check_if_already_sorted(t_list **stacka)
{
	t_list	*tmp;

	tmp = *stacka;
	while (tmp && tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
