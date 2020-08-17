/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 20:42:51 by htomohit          #+#    #+#             */
/*   Updated: 2020/08/16 20:42:54 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "constraint.h"
#include "is.h"

t_constr	create_constraint(int size, char *str, int offset)
{
	int			index;
	t_constr	constraint;

	constraint.size = size;
	constraint.v = (int *)malloc((size + 1) * sizeof(int));
	index = 0;
	while (index < size)
	{
		if (!*str)
			break ;
		if (is_number(*str))
		{
			if (offset)
				offset--;
			else
			{
				constraint.v[index] = *str - '0';
				index++;
			}
		}
		str++;
	}
	return (constraint);
}
