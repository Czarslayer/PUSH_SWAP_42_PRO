/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swappush.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabahani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:59:59 by mabahani          #+#    #+#             */
/*   Updated: 2023/01/07 00:02:01 by mabahani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAPPUSH_H
# define SWAPPUSH_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **alst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);
int		ft_atoi(const char	*str);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	**ft_split(char *str, char c);
int		ft_atoi(const char	*str);

void	sort(t_list **stacka, t_list **stackb);
void	sort3(t_list **stacka);
void	sort5(t_list **stacka, t_list **stackb);
void	ultimate_sort(t_list **stacka, t_list **stackb, int howmany);
void	free_double_ptr_char(char **ptr);

int		get_max(t_list *stack);
int		get_min(t_list *stack);
void	stacka_fixer(t_list **stacka);
int		get_position(t_list *stack, int content);
void	doublestackprinter(t_list **stacka, t_list **stackb);
void	stack_pusher_b(t_list **stacka, t_list **stackb, int content);
void	stack_pusher_a(t_list **stacka, t_list **stackb, int content);
void	push_and_rotate_b(t_list **stacka, t_list **stackb);
int		check_if_already_sorted(t_list **stacka);
int		stack_init(t_list **stacka, char **av);
int		problem_checker(t_list *stacka, char *number);
int		stack_init(t_list **stacka, char **av);
void	doublestackprinter(t_list **stacka, t_list **stackb);

void	reverse_rotateab(t_list **stacka, t_list **stackb);
void	reverse_rotate_stack_a(t_list **stacka);
void	reverse_rotate_stack_b(t_list **stackb);
void	rotate_a(t_list **stacka);
void	rotate_b(t_list **stackb);
void	rotateab(t_list **stacka, t_list **stackb);
void	swapb(t_list **stackb);
void	swapa(t_list **stacka);
void	swapab(t_list **stacka, t_list **stackb);
void	pusha(t_list **stacka, t_list **stackb);
void	pushb(t_list **stacka, t_list **stackb);

void	checker_reverse_rotateab(t_list **stacka, t_list **stackb);
void	checker_reverse_rotate_stack_a(t_list **stacka);
void	checker_reverse_rotate_stack_b(t_list **stackb);
void	checker_rotate_a(t_list **stacka);
void	checker_rotate_b(t_list **stackb);
void	checker_rotateab(t_list **stacka, t_list **stackb);
void	checker_swapb(t_list **stackb);
void	checker_swapa(t_list **stacka);
void	checker_swapab(t_list **stacka, t_list **stackb);
void	checker_pusha(t_list **stacka, t_list **stackb);
void	checker_pushb(t_list **stacka, t_list **stackb);

#endif