/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:41:30 by isabegar          #+#    #+#             */
/*   Updated: 2025/06/06 13:41:30 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;
	int		*arr;

	init_stacks(&a, &b);
	if (argc < 2)
		return (0);
	if (!fill_stack_from_args(&a, argc, argv + 1))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	arr = stack_to_array(&a);
	if (!arr)
		return (1);
	sort_array(arr, a.size);
	assign_index(&a, arr);
	free(arr);
	if (a.size <= 5)
		sort_small(&a, &b);
	else
		radix_sort(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
