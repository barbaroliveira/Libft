/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:46:17 by bapereir          #+#    #+#             */
/*   Updated: 2023/04/14 14:47:24 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*helper;
	size_t			i;

	i = 0;
	helper = (unsigned char *)s;
	while (i < n)
	{
		helper[i] = '\0';
		i++;
	}
}
