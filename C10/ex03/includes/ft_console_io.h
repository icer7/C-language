/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_console_io.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 16:49:10 by rysato            #+#    #+#             */
/*   Updated: 2020/08/19 16:49:11 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONSOLE_IO_H
# define FT_CONSOLE_IO_H

# define IN 0
# define OUT 1
# define ERR 2

void	write_char_to(char c, int fd);

void	write_char_out(char c);

void	write_str_out(char *str);

void	write_char_err(char c);

void	write_str_err(char *str);

#endif
