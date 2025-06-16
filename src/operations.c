/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:41:13 by isabegar          #+#    #+#             */
/*   Updated: 2025/06/06 13:41:13 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	t_node	*first;
	t_node	*last;

	if (a->size < 2)
		return ;
	first = a->top;
	last = a->top;
	while (last->next)
		last = last->next;
	a->top = first->next;
	last->next = first;
	first->next = NULL;
	write(1, "ra", 2);
	write(1, "\n", 1);
}

void	pb(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	if (a->size == 0)
		return ;
	tmp = a->top;
	a->top = tmp->next;
	a->size--;
	tmp->next = b->top;
	b->top = tmp;
	b->size++;
	write(1, "pb", 2);
	write(1, "\n", 1);
}

void	pa(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	if (b->size == 0)
		return ;
	tmp = b->top;
	b->top = tmp->next;
	b->size--;
	tmp->next = a->top;
	a->top = tmp;
	a->size++;
	write(1, "pa", 2);
	write(1, "\n", 1);
}

void	sa(t_stack *a)
{
	t_node	*first;
	t_node	*second;

	if (a->size < 2)
		return ;
	first = a->top;
	second = a->top->next;
	first->next = second->next;
	second->next = first;
	a->top = second;
	write(1, "sa", 2);
	write(1, "\n", 1);
}

void	rra(t_stack *a)
{
	t_node	*prev;
	t_node	*last;

	if (a->size < 2)
		return ;
	prev = NULL;
	last = a->top;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	if (prev)
		prev->next = NULL;
	last->next = a->top;
	a->top = last;
	write(1, "rra", 3);
	write(1, "\n", 1);
}
