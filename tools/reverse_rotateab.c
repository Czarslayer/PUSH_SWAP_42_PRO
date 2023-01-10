/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotateab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:57:13 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 14:55:20 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

void	reverse_rotateab(t_list **stacka, t_list **stackb)
{
	reverse_rotate_stack_a(stacka);
	reverse_rotate_stack_b(stackb);
	write(1, "rrr\n", 4);
}
