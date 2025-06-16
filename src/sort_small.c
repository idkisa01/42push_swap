/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:39:38 by isabegar          #+#    #+#             */
/*   Updated: 2025/06/14 16:39:38 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack*a)
{
	int		x;
	int		y;

	x = a->top->value;
	y = a->top->next->value;
	if (x > y)
		sa(a);
}

void	sort_3(t_stack *a)
{
	int		x;
	int		y;
	int		z;

	x = a->top->value;
	y = a->top->next->value;
	z = a->top->next->next->value;
	if (x < y && y > z && z > x)
		{
			sa(a);
			ra(a);
		}
	if (x > y && y < z && z > x)
		sa(a);
	if (x < y && y > z && z < x)
		rra(a);
	if (x > y && y < z && z < x)
		ra(a);
	if (x > y && y > z && z < x)
	{
		sa(a);
		rra(a);
	}
}

void	sort_4(t_stack *a, t_stack *b)
{
	int	min_pos;

	min_pos = find_min_pos(a);
	while (min_pos -- > 0)
		ra(a);
	pb(a, b);
	sort_3(a);
	pa(b, a);
}

void	sort_5(t_stack *a, t_stack *b)
{
	int	min_pos;

	min_pos = find_min_pos(a);
	while (min_pos -- > 0)
		ra(a);
	pb(a, b);
	sort_4(a, b);
	pa(b, a);
}
