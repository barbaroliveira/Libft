/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 23:39:02 by bapereir          #+#    #+#             */
/*   Updated: 2023/05/04 23:54:00 by bapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*__________________________________[HEADERS]_________________________________*/

# include <stdio.h>  /*__printf__*/
# include <unistd.h> /*__write__*/
# include <stdlib.h> /*__funcoes_originais__*/
# include <string.h> /*__funcoes_originais__*/
# include <ctype.h>  /*__funcoes_originais__*/
# include <stddef.h> /*__funcoes_originais__*/

/*_________________________________[FUNCTIONS]________________________________*/
/*-----------------------------*Mandatory Part I*-----------------------------*/
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *s, int c, size_t n);
void	bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

char	*ft_strchr(const char *s, int c);
#endif
