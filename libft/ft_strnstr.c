/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:35:33 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 14:35:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big,	const char *small, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*small == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < size)
	{
		j = 0;
		while (i + j < size && big[i + j] == small[j])
		{
			j++;
			if (small[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
	char	s[20] = "Hello world!";
	char	s2[20] = "llo";


	printf("\tsrc: %s search: %s result: %s\n\n", s, s2, ft_strnstr(s, s2, 12));
}*/