/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:35:01 by rysato            #+#    #+#             */
/*   Updated: 2020/08/07 14:35:02 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int box;

	index = 0;
	while (index < size / 2)
	{
		box = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = box;
		index++;
	}
}
