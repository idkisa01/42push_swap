/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 13:45:08 by isabegar          #+#    #+#             */
/*   Updated: 2025/06/13 13:45:08 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_index(t_stack *a)
{
	int		max_index;
	t_node	*current;

	current = a->top;
	max_index = current->index;
	while (current)
	{
		if (current->index > max_index)
			max_index = current->index;
		current = current->next;
	}
	return (max_index);
}

void	radix_pass(t_stack *a, t_stack *b, int bit)
{
	int	i;
	int	size;

	size = a->size;
	i = 0;
	while (i < size)
	{
		if ((a->top->index >> bit) & 1)
			ra(a);
		else
			pb(a, b);
		i++;
	}
	while (b->top)
	{
		pa(a, b);
	}
}

int	radix_sort(t_stack *a, t_stack *b)
{
	int		bit;
	int		max;

	if (is_sorted(a) == 1)
		return (0);
	bit = 0;
	max = max_index(a);
	while ((max >> bit) != 0)
	{
		radix_pass(a, b, bit);
		bit++;
	}
	return (bit);
}
