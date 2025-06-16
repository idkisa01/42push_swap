/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:42:37 by isabegar          #+#    #+#             */
/*   Updated: 2024/10/15 12:58:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += ('a' - 'A');
	}
	return (c);
}

/*int main(void)
{
	int	c;

	c = 'A';
	printf("\tchar: %c tolower: %c\n\n", c, ft_tolower(c));
}*/