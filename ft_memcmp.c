/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:35:19 by bapereir          #+#    #+#             */
/*   Updated: 2023/05/26 21:35:46 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*ps1;
	unsigned const char	*ps2;

	i = 0;
	ps1 = (unsigned const char *) s1;
	ps2 = (unsigned const char *) s2;
	if (!n)
		return (0);
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return ((size_t)ps1[i] - (size_t)ps2[i]);
		i++;
	}
	return (0);
}
