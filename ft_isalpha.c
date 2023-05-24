/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:56:51 by bapereir          #+#    #+#             */
/*   Updated: 2023/04/12 15:57:04 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	count;

	count = 0;
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*int	main()
{
    int c;
    c = 'Q';
    printf("Test of isalpha:\n");
    printf("Result when 'Q' is passed: %d", isalpha(c));
    printf("\nTest of function:\n");
    printf("Result when 'Q' is passed: %d\n\n", ft_is_alpha(c));
    
    c = 'q';
    printf("Test of isalpha:");
    printf("\nResult when 'q' is passed: %d", isalpha(c));
    printf("\nTest of function:");
    printf("\nResult when 'q' is passed: %d\n\n", ft_is_alpha(c));

    c='+';
    printf("Test of isalpha:");
    printf("\nResult when '+'(non-alphabetic character)
     is passed: %d", isalpha(c));
    printf("\nTest of function:");
    printf("\nResult when '+'(non-alphabetic character)
     is passed: %d", ft_is_alpha(c));

    return 0;
}
 This function returns 1 either with a uppercase
 or a lowercase is found, in the original function the returned value is 1024
 ??? I don't know if its suposed to return 1024 or a number diferent of 0
*/
