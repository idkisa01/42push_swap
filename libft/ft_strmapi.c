/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 22:29:55 by marvin            #+#    #+#             */
/*   Updated: 2024/10/09 22:29:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	to_upper(unsigned int i,  char c)
{
	(void) i;
	if (c >= 'a' && c <= 'z')
	{
		c -= ('a' - 'A');
	}
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	unsigned int	i;
	char			*dest;

	dest = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*s;
	s= "hola";
	printf("%s",ft_strmapi(s,to_upper));
	printf("\n%s", s);
}*/