/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 14:42:16 by rysato            #+#    #+#             */
/*   Updated: 2020/08/08 14:42:18 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_numeric(char *str)
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
		if (!(box >= '0' && box <= '9'))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}
