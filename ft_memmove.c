/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:50:42 by bapereir          #+#    #+#             */
/*   Updated: 2023/04/14 14:51:11 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*d;
	char		*s;
	size_t		i;

	s = (char *)src;
	d = (char *)dst;
	if (!dst && !src)
		return (dst);
	i = 0;
	if (src < dst)
	{
		while (n--)
			d[n] = s[n];
	}	
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dst);
}
