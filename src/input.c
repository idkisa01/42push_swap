/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 14:10:42 by isabegar          #+#    #+#             */
/*   Updated: 2025/05/25 14:10:42 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_number(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL || *str == '\0')
		return (0);
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	safe_atoi(const char *str, int *out)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	if (!*str)
		return (0);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		num = num * 10 + (*str - '0');
		if ((sign == 1 && num > INT_MAX) || (sign == -1 && - num < INT_MIN))
			return (0);
		str++;
	}
	*out = (int)(num * sign);
	return (1);
}

int	exists_in_stack(t_stack *stack, int value)
{
	t_node	*tmp;

	tmp = stack->top;
	while (tmp != NULL)
	{
		if (tmp->value == value)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int	fill_stack_from_args(t_stack *a, int argc, char *argv[])
{
	int	i;
	int	value;

	i = 1;
	if (ft_strchr(argv[i], '"'))
		ft_split(argv[i], ' ');
	while (i < argc)
	{
		if (!is_valid_number(argv[i]))
			return (0);
		if (!safe_atoi(argv[i], &value))
			return (0);
		if (exists_in_stack(a, value))
			return (0);
		append_node(a, create_node(value));
		i++;
	}
	return (1);
}
