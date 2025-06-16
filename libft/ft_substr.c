/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:44:50 by isabegar          #+#    #+#             */
/*   Updated: 2024/10/16 21:06:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	char	*str;
	size_t	slen;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (slen <= start)
		return (ft_strdup(""));
	if ((slen - start) < len)
		len = slen - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (s + start), (len + 1));
	return (str);
}

/*int main ()
{
	char	*s;
	char	*dup;

	s = "Hello World!";
	dup = ft_substr(s, 6, 6);

	printf("\tdup: %s\n", dup);
	printf("\tPointer s: %p, Pointer dup: %p\n\n", s, dup);
}*/
