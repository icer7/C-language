/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_equal_buffer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 16:50:21 by rysato            #+#    #+#             */
/*   Updated: 2020/08/19 16:50:22 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_is_equal(char *a, char *b, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (index < size)
	{
		if ((unsigned char)a[index] != (unsigned char)b[index])
			return (false);
		index++;
	}
	return (true);
}
