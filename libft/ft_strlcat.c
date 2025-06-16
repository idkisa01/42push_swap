/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:10:55 by isabegar          #+#    #+#             */
/*   Updated: 2024/10/16 11:10:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	l_dst;
	size_t	l_src;
	size_t	i;

	l_dst = 0;
	while (dst[l_dst] != '\0' && l_dst < dstsize)
		l_dst++;
	l_src = 0;
	while (src[l_src] != '\0')
		l_src++;
	if (dstsize <= l_dst)
		return (dstsize + l_src);
	i = 0;
	while (src[i] != '\0' && (l_dst + i) < (dstsize - 1))
	{
		dst[l_dst + i] = src[i];
		i++;
	}
	dst[l_dst + i] = '\0';
	return (l_dst + l_src);
}

/*int main()
{
	char	s[20] = "world!";
	char	d[20] = "Hello ";
	int		n;

	n = ft_strlcat(d, s, 12);
	printf("\tdst: %s len: %d\n\n", d, n);
}*/
