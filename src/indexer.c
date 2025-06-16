/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:41:50 by isabegar          #+#    #+#             */
/*   Updated: 2025/06/06 13:41:50 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*stack_to_array(t_stack *stack)
{
	t_node	*tmp;
	int		*arr;
	int		i;

	tmp = stack->top;
	arr = malloc(sizeof(int) * stack->size);
	if (!arr)
		return (NULL);
	i = 0;
	while (tmp)
	{
		arr[i] = tmp->value;
		i++;
		tmp = tmp->next;
	}
	return (arr);
}

void	sort_array(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	assign_index(t_stack *stack, int *sort_array)
{
	t_node	*tmp;
	int		i;

	tmp = stack->top;
	while (tmp != NULL)
	{
		i = 0;
		while (i < stack->size)
		{
			if (tmp->value == sort_array[i])
			{
				tmp->index = i;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
}
