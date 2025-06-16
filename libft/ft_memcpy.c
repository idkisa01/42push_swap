/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:54:26 by isabegar          #+#    #+#             */
/*   Updated: 2024/10/14 11:53:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr_d;
	const unsigned char	*ptr_s;

	ptr_d = (unsigned char *)dest;
	ptr_s = (const unsigned char *)src;
	if (!ptr_d && !ptr_s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		ptr_d[i] = ptr_s[i];
		i++;
	}
	return (dest);
}

/*int main (void)
{
	char d[20];
	char s[] = "holamundo";
	ft_memcpy(d, s, 3);
	printf("src: %s dst: %s\n\n", s, d);
}*/