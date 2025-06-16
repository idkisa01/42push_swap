/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:37:14 by marvin            #+#    #+#             */
/*   Updated: 2024/10/10 15:37:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_digits(int n)
{
	int	len;

	len = 1;
	if (n == -2147483648)
	{
		len += 2;
		n = 147483648;
	}
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

static char	*put_nbr(char *s, int n, int i)
{
	if (n == -2147483648)
	{
		s[0] = '-';
		s[1] = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
	}
	while (n >= 10)
	{
		s[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	s[i] = n + '0';
	return (s);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*dest;

	len = num_digits(n);
	dest = (char *) malloc(len + 1);
	if (!dest)
		return (NULL);
	dest = put_nbr(dest, n, len -1);
	dest[len] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*str;

	str = ft_itoa(-4568);
	printf("\t %s\n\n", str);

}*/
