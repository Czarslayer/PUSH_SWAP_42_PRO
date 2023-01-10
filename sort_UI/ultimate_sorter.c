/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ultimate_sorter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:09:27 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 21:33:43 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

int	*table_maker(t_list **stacka, int size)
{
	int		*tab;
	int		i;
	t_list	*tmp;

	i = 0;
	tab = malloc(sizeof(int) * size);
	tmp = *stacka;
	while (tmp)
	{
		tab[i] = tmp->content;
		tmp = tmp->next;
		i++;
	}
	return (tab);
}

void	table_sort(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	number_is_in_the_chank(t_list **stacka, int *tab, int size, int i)
{
	int	j;

	j = 0;
	while (j < size * i)
	{
		if ((*stacka)->content == tab[j])
			return (j);
		j++;
	}
	return (-1);
}

void	ultimate_help(t_list **stacka, t_list **stackb, int *tab, int howmany)
{
	int	i;
	int	count;
	int	j;
	int	size;

	j = 0;
	i = 1;
	count = 0;
	size = ft_lstsize(*stacka) / howmany;
	while (ft_lstsize(*stacka) && i <= howmany + 1)
	{
		j = number_is_in_the_chank(stacka, tab, size, i);
		if (j != -1)
		{
			if (j >= (i * size) - (size / 2))
				pushb(stacka, stackb);
			else
				push_and_rotate_b(stacka, stackb);
			count++;
		}
		else
			rotate_a(stacka);
		if (count == i * size)
			i++;
	}
}

void	ultimate_sort(t_list **stacka, t_list **stackb, int howmany)
{
	int	*tab;
	int	size;

	if (check_if_already_sorted(stacka) == 1)
		return ;
	size = ft_lstsize(*stacka);
	tab = table_maker(stacka, ft_lstsize(*stacka));
	table_sort(tab, size);
	size = ft_lstsize(*stacka) / howmany;
	ultimate_help(stacka, stackb, tab, howmany);
	free(tab);
	sort(stacka, stackb);
}
