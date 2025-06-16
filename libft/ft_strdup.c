/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:04:42 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 14:04:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	long_s;
	char	*dest;

	long_s = ft_strlen(s);
	dest = (char *)malloc(long_s + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s, long_s);
	dest[long_s] = '\0';
	return (dest);
}

/*int	main()
{
	char	*s;
	char	*dup;

	s = "Hello World!";
	dup = ft_strdup(s);
	printf("\tduplicate: %s\n", dup);
	printf("\tPointer s: %p, Pointer dup: %p\n\n", s, dup);
}*/