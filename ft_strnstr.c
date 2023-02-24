/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:15:06 by tscasso           #+#    #+#             */
/*   Updated: 2023/02/23 17:15:11 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*strnstr(const char *str, const char *tofind, size_t len)
{
	size_t	tofind_len;

	tofind_len = ft_strlen(tofind);
	if (tofind_len == 0)
		return ((char *)str);
	while (len-- >= tofind_len)
	{
		if (*str == *tofind && ft_strncmp(str, tofind, tofind_len) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
