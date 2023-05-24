/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:26:12 by bapereir          #+#    #+#             */
/*   Updated: 2023/04/13 12:29:09 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	count;

	count = 0;
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
	{
		count++;
	}
	if (count != 0)
	{
		return (1);
	}
	else
		return (0);
}

/*int main()
{
    int c;
    int result;
    
    c = '5';
    result = isalnum(c);
    printf("__________Test of isalnum:__________\n");
    printf("When %c is passed, return value is %d", c, result);
    result = ft_isalnum(c);
    printf("\nTest of function created:\n");
    printf("When %c is passed, return value is %d\n\n", c, result);

    c = 'Q';
    result = isalnum(c);
    printf("__________Test of isalnum:__________\n");
    printf("When %c is passed, return value is %d", c, result);
    result = ft_isalnum(c);
    printf("\nTest of function created:\n");
    printf("When %c is passed, return value is %d\n\n", c, result);

    c = 'l';
    result = isalnum(c);
    printf("__________Test of isalnum:__________\n");
    printf("When %c is passed, return value is %d\n", c, result);
    result = ft_isalnum(c);
    printf("\nTest of function created:\n");
    printf("When %c is passed, return value is %d\n\n", c, result);

    c = '+';
    result = isalnum(c);
    printf("__________Test of isalnum:__________\n");
    printf("When %c is passed, return value is %d", c, result);
    result = ft_isalnum(c);
    printf("\nTest of function created:\n");
    printf("When %c is passed, return value is %d\n", c, result);
    return 0;
}*/
//tests are not well presented
/* This function returns 1 either with the 
tests of 5, Q, l and +, in the original function the 
returned value is 8
 ??? I don't know if its suposed to return 8 or a number diferent of 0
*/
