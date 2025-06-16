/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:45:19 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 20:45:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr_d;
	const unsigned char	*ptr_s;

	ptr_d = (unsigned char *)dest;
	ptr_s = (const unsigned char *)src;
	i = 0;
	if (!dest && ! src)
		return (NULL);
	if (ptr_s < ptr_d)
	{
		while (len --)
			ptr_d[len] = ptr_s[len];
	}
	else
	{
		while (i < len)
		{
			ptr_d[i] = ptr_s[i];
			i++;
		}
	}
	return (dest);
}

/*int main(void)
{
	char	s[] = "GATA";

	ft_memmove(s + 1, s, 3);
	
	printf("%s\n\n", s);
}*/