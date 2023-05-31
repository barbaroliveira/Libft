/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 21:11:20 by bapereir          #+#    #+#             */
/*   Updated: 2023/05/29 21:12:05 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	return: pointer to the duplicated string. NULL if insufficient memory
	is available
	param1: the string to duplicate
	description: allocates memory with malloc and duplicates string s to
	that memory

	Use: to duplicate a string into a different memory space memory
*/

#include "libft.h"
//change
char    *ft_strdup(const char *s)
{
    int		i;
	char	*dest;

	dest = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dest)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}