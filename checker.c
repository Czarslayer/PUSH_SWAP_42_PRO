/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:38:22 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/08 16:18:03 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./included_libraries/get_next_line.h"
#include "./included_libraries/swappush.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int	checker(t_list **stacka, t_list **stackb, char *line)
{
	if (ft_strcmp(line, "sa\n") == 0)
		checker_swapa(stacka);
	else if (ft_strcmp(line, "sb\n") == 0)
		checker_swapb(stackb);
	else if (ft_strcmp(line, "ss\n") == 0)
		checker_swapab(stacka, stackb);
	else if (ft_strcmp(line, "pa\n") == 0)
		checker_pusha(stacka, stackb);
	else if (ft_strcmp(line, "pb\n") == 0)
		checker_pushb(stacka, stackb);
	else if (ft_strcmp(line, "ra\n") == 0)
		checker_rotate_a(stacka);
	else if (ft_strcmp(line, "rb\n") == 0)
		checker_rotate_b(stackb);
	else if (ft_strcmp(line, "rr\n") == 0)
		checker_rotateab(stacka, stackb);
	else if (ft_strcmp(line, "rra\n") == 0)
		checker_reverse_rotate_stack_a(stacka);
	else if (ft_strcmp(line, "rrb\n") == 0)
		checker_reverse_rotate_stack_b(stackb);
	else if (ft_strcmp(line, "rrr\n") == 0)
		checker_reverse_rotateab(stacka, stackb);
	else
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	char	*line;
	t_list	*sa;
	t_list	*sb;

	sa = NULL;
	sb = NULL;
	if (ac == 1)
		return (0);
	if (stack_init(&sa, av) == 0)
		return (0);
	line = get_next_line(0);
	while (line)
	{
		if (checker(&sa, &sb, line) == 0)
			return (write(2, "Error\n", 6), free(line), 0);
		free(line);
		line = get_next_line(0);
	}
	free(line);
	if (check_if_already_sorted(&sa) && !sb)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}
