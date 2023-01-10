/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:16:08 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 14:56:28 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = lst;
	if (lst)
	{
		while (temp)
		{
			temp = temp->next;
			i++;
		}
	}
	return (i);
}
