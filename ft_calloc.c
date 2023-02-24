/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <tscasso@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:36:55 by tscasso           #+#    #+#             */
/*   Updated: 2023/02/21 12:43:14 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;
	char	*p;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	p = ptr;
	if (ptr != NULL)
	{
		while (total_size--)
		*p++ = 0;
	}
	return (ptr);
}
