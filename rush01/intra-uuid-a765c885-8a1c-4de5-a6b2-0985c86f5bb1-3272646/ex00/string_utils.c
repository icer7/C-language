/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 20:43:47 by htomohit          #+#    #+#             */
/*   Updated: 2020/08/16 20:43:51 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		str_length(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

void	str_write(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	str_write_char(char c)
{
	write(1, &c, 1);
}
