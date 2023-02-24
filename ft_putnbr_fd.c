/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:59:33 by tscasso           #+#    #+#             */
/*   Updated: 2023/02/23 16:59:39 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[32];
	int		i;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	i = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	while (n > 0)
	{
		buffer[i++] = n % 10 + '0';
		n /= 10;
	}
	while (i-- > 0)
		ft_putchar_fd(buffer[i], fd);
}
