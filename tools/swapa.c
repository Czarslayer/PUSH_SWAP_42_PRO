/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:57:41 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 14:55:35 by mabahani         ###   ########.fr       */
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

void	swapa(t_list **stacka)
{
	swapfirsttwot_list(stacka);
	write(1, "sa\n", 3);
}
