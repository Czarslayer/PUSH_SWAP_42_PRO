/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:57:34 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 14:55:27 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

void	rotate_b(t_list **stackb)
{
	t_list	*temp;

	if (*stackb && (*stackb)->next)
	{
		temp = *stackb;
		ft_lstadd_back(stackb, ft_lstnew(temp->content));
		*stackb = (*stackb)->next;
		free(temp);
		write(1, "rb\n", 3);
	}
}
