/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-02 09:50:17 by isabegar          #+#    #+#             */
/*   Updated: 2024-10-02 09:50:17 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	longer;

	longer = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + longer);
	while (longer--)
	{
		if (s[longer] == (char)c)
			return ((char *)s + longer);
	}
	return (NULL);
}

/*int main()
{
	printf("strrchr %s \n", ft_strrchr("Hola, mundo!", 'o'));
}*/