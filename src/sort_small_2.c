/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:40:35 by isabegar          #+#    #+#             */
/*   Updated: 2025/06/14 16:40:35 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_pos(t_stack *a)
{
	t_node	*current;
	int		min_index;
	int		min_pos;
	int		pos;

	current = a->top;
	min_index = current->index;
	min_pos = 0;
	pos = 0;
	while (current)
	{
		if (current->index < min_index)
		{
			min_index = current->index;
			min_pos = pos;
		}
		current = current->next;
		pos++;
	}
	return (min_pos);
}

void	sort_small(t_stack *a, t_stack *b)
{
	if (is_sorted(a) == 1)
		return ;
	if (a->size == 2)
		sort_2(a);
	if (a->size == 3)
		sort_3(a);
	if (a->size == 4)
		sort_4(a, b);
	if (a->size == 5)
		sort_5(a, b);
}
