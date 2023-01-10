/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:27:43 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/09 23:10:31 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../included_libraries/swappush.h"

int	problem_checker(t_list *stacka, char *number)
{
	int	i;

	i = 0;
	if (!number)
		return (0);
	if (number[i] == '+' || number[i] == '-')
		i++;
    if(number[i] == '\0')
        return (0);
	while (number[i])
	{
		if (!((number[i] >= '0' && number[i] <= '9')))
			return (0);
		i++;
	}
	while (stacka)
	{
		if (stacka->content == ft_atoi(number)
			|| ft_atoi(number) > 2147483647 || ft_atoi(number) < -2147483648)
			return (0);
		stacka = stacka->next;
	}
	return (1);
}

void	free_double_ptr_char(char **p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		free(p[i]);
		i++;
	}
	free(p);
}

int	stack_init(t_list **stacka, char **av)
{
	int		i;
	int		j;
	char	**p;

	i = 1;
	j = 0;
	while (av[i])
	{
		p = ft_split(av[i], ' ');
		if (p[0] == NULL)
			return (write(2, "Error\n", 6), free_double_ptr_char(p), 0);
		while (p[j])
		{
			if (problem_checker(*stacka, p[j]) == 0)
				return (write(2, "Error\n", 6), free_double_ptr_char(p), 0);
			ft_lstadd_back(stacka, ft_lstnew(ft_atoi(p[j])));
			j++;
		}
		j = 0;
		i++;
		free_double_ptr_char(p);
	}
	return (1);
}
