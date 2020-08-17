/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pretty_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 20:41:50 by htomohit          #+#    #+#             */
/*   Updated: 2020/08/16 20:41:53 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_utils.h"

void	print_grid(int **grid, int size)
{
	int	index;
	int	jndex;

	index = 0;
	while (index < size)
	{
		jndex = 0;
		while (jndex < size)
		{
			str_write_char((char)(grid[index][jndex] + '0'));
			if (jndex != size - 1)
				str_write(" ");
			jndex++;
		}
		if (index != size - 1)
			str_write("\n");
		index++;
	}
}
