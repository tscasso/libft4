/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <tscasso@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:37:12 by tscasso           #+#    #+#             */
/*   Updated: 2023/02/21 12:38:12 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = (n <= 0);
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	else
		sign = 0;
	len = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (len + sign + 1));
	if (!str)
		return (NULL);
	str[len + sign] = '\0';
	while (len--)
	{
		str[len + sign] = (n % 10) + '0';
		n /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
