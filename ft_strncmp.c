/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:51:36 by bapereir          #+#    #+#             */
/*   Updated: 2023/03/23 16:51:41 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		i++;
	}
	if (s1[i] != s2[i] && i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*int	main()
{
	char	s1[] = "aa aa b";
	char	s2[] = "aa aa a";
	
	printf("%d", ft_strcmp(s1, s2));
}*/
