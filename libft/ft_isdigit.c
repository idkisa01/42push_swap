/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:15:39 by isabegar          #+#    #+#             */
/*   Updated: 2024/09/17 20:20:59 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int digit)
{
	if (digit >= '0' && digit <= '9')
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char digit = '2';
	printf("%d", ft_isdigit (digit));
	return(0);
}*/