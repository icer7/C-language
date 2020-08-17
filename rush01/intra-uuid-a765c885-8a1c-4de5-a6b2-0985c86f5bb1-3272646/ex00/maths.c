/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 20:42:28 by htomohit          #+#    #+#             */
/*   Updated: 2020/08/16 20:42:30 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boolean.h"

int	ft_sqrt(int nb, t_bool return_zero_if_float)
{
	unsigned int		sqrt;
	unsigned int		index;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	index = 0;
	while ((sqrt = index * index) <= (unsigned int)nb)
		index++;
	index -= 1;
	if (return_zero_if_float)
		return (index * index == (unsigned int)nb ? index : 0);
	return (index);
}

int	ft_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	result = 1;
	while (power-- > 0)
		result *= nb;
	return (result);
}
