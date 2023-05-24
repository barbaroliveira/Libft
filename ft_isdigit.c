/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:38:27 by bapereir          #+#    #+#             */
/*   Updated: 2023/04/13 10:39:07 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	int	count;

	count = 0;
	if (c >= '0' && c <= '9')
	{
		count++;
	}
	if (count != 0)
		return (1);
	else
		return (0);
}
/*int	main()
{
	int c;
	c = '5';
	printf("__________Test of isdigit:__________\n");
	printf("Result when 5 is passed: %d", isdigit(c));
	printf("\n__________Test of function:________\n");
	printf("Result when 5 is passed: %d\n", ft_isdigit(c));
	
	c = '+';
	printf("__________Test of isdigit:__________\n");
	printf("Result when + is passed: %d", isdigit(c));
	printf("\n__________Test of function:________\n");
	printf("Result when + is passed: %d\n", ft_isdigit(c));
	
	c='a';
	printf("__________Test of isdigit:__________\n");
	printf("Result a is passed: %d", isdigit(c));
	printf("\n__________Test of function:________\n");
	printf("Result when a is passed: %d\n", ft_isdigit(c));

    return 0;
}*/
/*
When you pass the number 5 in the function isdigit the return value is 2048
*/
