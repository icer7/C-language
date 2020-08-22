/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_write.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 14:26:49 by rysato            #+#    #+#             */
/*   Updated: 2020/08/22 14:26:50 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_io.h"

void	ft_char_write_to(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_char_write(char c)
{
	ft_char_write_to(OUT, c);
}
