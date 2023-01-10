/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:57:29 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 14:55:32 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

void	rotateab(t_list **stacka, t_list **stackb)
{
	rotate_a(stacka);
	rotate_b(stackb);
	write(1, "rr\n", 3);
}
