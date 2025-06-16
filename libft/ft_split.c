/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:54:24 by isabegar          #+#    #+#             */
/*   Updated: 2025/05/25 12:44:25 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	length_word(char const *s, char c)
{
	size_t	size;

	size = 0;
	while (s[size] && s[size] != c)
		size++;
	return (size);
}

static	size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			s += length_word(s, c);
		}
		else
			s++;
	}
	return (count);
}

static	void	free_mem(char **words)
{
	size_t	i;

	i = 0;
	while (words[i])
		free(words[i++]);
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	ntwords;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	ntwords = count_words(s, c);
	words = (char **)malloc((ntwords + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			words[i] = ft_substr(s, 0, length_word(s, c));
			if (!words[i++])
				return (free_mem(words), NULL);
			s += length_word(s, c);
		}
		else
			s++;
	}
	words[i] = NULL;
	return (words);
}

/*int main ()
	{
		char	*s;
		char	**words;
		char	d;
		int	i;

		s = "Hello World!";
		d = ' ';
		words = ft_split(s, d);
		i = 0;

		printf("\tsrc: %s delimiter: <%c>\n", s, d);
		while (words[i])
		{
			printf("\tsrc %d: %s pointer: %p\n", i, words[i], words[i]);
			i++;
		}
	}*/
