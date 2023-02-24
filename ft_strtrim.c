/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <tscasso@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:38:18 by tscasso           #+#    #+#             */
/*   Updated: 2023/02/21 12:45:40 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		fin;
	size_t		debut;
	char		*result;

	fin = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_strchr(set, s1[debut]))
	{
		debut++;
	}
	while (ft_strchr(set, s1[fin]))
	{
		fin--;
	}
	result = (char *) ft_calloc((fin - debut + 1), sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s1 + debut, fin - debut);
	return (result);
}
