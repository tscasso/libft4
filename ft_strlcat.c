/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:09:54 by tscasso           #+#    #+#             */
/*   Updated: 2023/02/23 17:10:02 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//#define SIZE(a, b) ((a) < (b) ? (a) : (b))

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	n;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (!dstsize)
		return (ft_strlen(src));
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	if ((dstsize - dstlen - 1) < srclen)
		n = dstsize - dstlen - 1;
	if ((dstsize - dstlen - 1) < srclen)
		n = srclen;	
	//n = SIZE(dstsize - dstlen - 1, srclen);
	ft_memcpy(dst + dstlen, src, n);
	dst[dstlen + n] = '\0';
	return (dstlen + srclen);
}
