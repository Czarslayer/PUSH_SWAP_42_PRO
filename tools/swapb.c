/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:57:45 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 14:55:42 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

static void	swapfirsttwot_list(t_list **head)
{
	t_list	*first;
	t_list	*second;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	first = *head;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*head = second;
}

void	swapb(t_list **stackb)
{
	swapfirsttwot_list(stackb);
	write(1, "sb\n", 3);
}
