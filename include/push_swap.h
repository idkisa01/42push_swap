/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:03:47 by isabegar          #+#    #+#             */
/*   Updated: 2025/06/05 18:03:47 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

t_node	*create_node(int value);
void	append_node(t_stack *stack, t_node *new);
void	init_stacks(t_stack *a, t_stack *b);
void	free_stack(t_stack *stack);
int		is_sorted(t_stack *a);
void	free_split(char **array);

int		safe_atoi(const char *str, int *out);
int		exists_in_stack(t_stack *stack, int value);
int		fill_stack_from_args(t_stack *a, int argc, char *argv[]);

int		*stack_to_array(t_stack *stack);
void	sort_array(int *arr, int size);
void	assign_index(t_stack *stack, int *sort_array);

void	ra(t_stack *a);
void	pb(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	sa(t_stack *a);
void	rra(t_stack *a);

int		max_index(t_stack *a);
void	radix_pass(t_stack *a, t_stack *b, int bit);
int		radix_sort(t_stack *a, t_stack *b);

void	sort_small(t_stack *a, t_stack *b);
int		find_min_pos(t_stack *a);

void	sort_2(t_stack*a);
void	sort_3(t_stack*a);
void	sort_4(t_stack*a, t_stack *b);
void	sort_5(t_stack*a, t_stack *b);

#endif