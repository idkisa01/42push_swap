/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 07:40:52 by marvin            #+#    #+#             */
/*   Updated: 2024/10/11 07:40:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_equals(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	i = 0;
	while (is_equals(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (is_equals(s1[j], set))
		j--;
	if (i > j)
		return (ft_strdup(""));
	str = ft_substr(s1, i, (j - i + 1));
	if (!str)
		return (NULL);
	return (str);
}

/*int main ()
{
	char	*s;
	char	*set;
	char	*str;

	s = "abcgatoabc";
	set = "abc";
	str = ft_strtrim(s, set);
	printf("\tsrc: %s strtrim: %s\n\n", s, str);
}*/
