/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:00:03 by tscasso           #+#    #+#             */
/*   Updated: 2023/02/23 17:00:07 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**ft_split(char const *str, char c)
{
	char		**tab;
	char		*start;
	char		*end;
	int			len;
	int			j;

	start = (char *)str;
	end = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * ft_strlen(str));
	if (!tab)
		return (NULL);
	while (*str)
	{
		if (*str == c)
		{
			str++;
			start = (char *)str;
		}
		else
		{
			end = ft_strchr(str, c);
		}
		if (!end)
		{
			end = (char *)str + strlen(str);
			len = end - start;
			tab[j] = (char *)malloc(sizeof(char) * (len + 1));
		}
		if (!tab[j])
			return (NULL);
		memcpy(tab[j], start, len);
		tab[j][len] = '\0';
		str = end;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
