/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 15:06:23 by rysato            #+#    #+#             */
/*   Updated: 2020/08/08 15:06:27 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_printable(char *str)
{
	int		index;
	bool	valid;
	char	box;

	index = 0;
	valid = true;
	while (true)
	{
		box = str[index];
		if (box == '\0')
		{
			break ;
		}
		if (!(box >= ' ') || box == 127)
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}
