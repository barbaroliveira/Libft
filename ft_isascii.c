/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:35:22 by bapereir          #+#    #+#             */
/*   Updated: 2023/04/13 14:36:51 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	int	count;

	count = 0;
	if (c >= 0 && c <= 127)
	{
		count++;
	}
	if (count != 0)
		return (1);
	else
		return (0);
}
/* Need to make the tests for this function
*/
