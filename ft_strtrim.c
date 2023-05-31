/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:56:20 by bapereir          #+#    #+#             */
/*   Updated: 2023/04/17 15:58:08 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	mod_strchr(char s, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trim;
	size_t		start;
	size_t		end;
	int			i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && mod_strchr(s1[start], set))
		start++;
	while (end > start && mod_strchr(s1[end - 1], set))
		end--;
	trim = (char *) malloc(sizeof(char) * (end - start + 1));
	if (!trim)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[i] = '\0';
	return (trim);
}
