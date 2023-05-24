/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:39:27 by bapereir          #+#    #+#             */
/*   Updated: 2023/04/13 12:39:53 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	int	count;

	count = 0;
	if (c >= 32 && c <= 126)
	{
		count++;
	}
	if (count != 0)
		return (1);
	else
		return (0);
}
/*int main()
{
    char c;

    c = 'Q';
    printf("__________Test of isprint:__________\n");
    printf("Result when a printable character %c is passed
     to isprint(): %d", c, isprint(c));
    printf("\n__________Test of isprint function:__________\n");
    printf("Result when a printable character %c is passed
     to isprint(): %d\n\n", c, ft_isprint(c));

    c = '\n';
    printf("__________Test of isprint:__________");
    printf("\nResult when a control character %c is passed
     to isprint(): %d", c, isprint(c));
    printf("\n__________Test of isprint function:__________\n");
    printf("Result when a printable character %c is passed
     to isprint(): %d\n\n", c, ft_isprint(c));

    return 0;
}*/
/*needs to be adapted
!!variavel de entrada int!!
tests to the new function
*/
