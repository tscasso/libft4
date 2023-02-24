/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <tscasso@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:36:32 by tscasso           #+#    #+#             */
/*   Updated: 2023/02/21 12:36:48 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			s_len;
	const char		*empty_string;
	size_t	min_substr_len;
	char			*result;

	s_len = ft_strlen(s);
	empty_string = "";
	min_substr_len = 1;
	if (start >= s_len)
		return (ft_strdup(empty_string));
	if (len < min_substr_len)
		len = min_substr_len;
	if (start + len >= s_len)
		len = s_len - start;
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s + start, len);
	result[len] = '\0';
	return (result);
}
