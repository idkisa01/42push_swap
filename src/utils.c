/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:04:04 by isabegar          #+#    #+#             */
/*   Updated: 2025/06/05 18:04:04 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stacks(t_stack *a, t_stack *b)
{
	a->top = NULL;
	a->size = 0;
	b->top = NULL;
	b->size = 0;
}

t_node	*create_node(int value)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = -1;
	new->next = (NULL);
	return (new);
}

void	append_node(t_stack *stack, t_node *new)
{
	t_node	*tmp;

	if (!stack || !new)
		return ;
	if (!stack->top)
		stack->top = new;
	else
	{
		tmp = stack->top;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	stack->size++;
}

void	free_stack(t_stack *stack)
{
	t_node	*tmp;
	t_node	*current;

	current = stack->top;
	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	stack->top = NULL;
	stack->size = 0;
}
	