/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:10:02 by marvin            #+#    #+#             */
/*   Updated: 2024/10/08 17:10:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	total_size;

	if (!s1 || !s2)
		return (NULL);
	total_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *) malloc(total_size);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, ft_strlen(s1));
	ft_memcpy(str + ft_strlen(s1), s2, ft_strlen(s2));
	str[total_size - 1] = '\0';
	return (str);
}

/*int main() {
char *s1 = "Hello, ";
char *s2 = "world!";
char *str = ft_strjoin(s1, s2);

printf("%s\n", str);

free(str); 
}*/