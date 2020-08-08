/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 14:31:57 by rysato            #+#    #+#             */
/*   Updated: 2020/08/08 14:31:59 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_alpha(char *str)
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
		if (!((box >= 'A' && box <= 'Z') || (box >= 'a' && box <= 'z')))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}
