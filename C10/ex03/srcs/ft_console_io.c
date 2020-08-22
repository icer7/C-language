/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_console_io.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 16:50:08 by rysato            #+#    #+#             */
/*   Updated: 2020/08/19 16:50:10 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_console_io.h"

void	write_char_to(char c, int fd)
{
	write(fd, &c, 1);
}

void	write_char_out(char c)
{
	write_char_to(c, OUT);
}

void	write_str_out(char *str)
{
	while (*str)
	{
		write_char_out(*str);
		str++;
	}
}

void	write_char_err(char c)
{
	write_char_to(c, ERR);
}

void	write_str_err(char *str)
{
	while (*str)
	{
		write_char_err(*str);
		str++;
	}
}
