/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 17:04:40 by rysato            #+#    #+#             */
/*   Updated: 2020/08/21 17:04:41 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		index;
	int		sorted;

	sorted = 1;
	index = 0;
	while (index < length - 1 && sorted)
	{
		if ((*f)(tab[index], tab[index + 1]) < 0)
			sorted = 0;
		index++;
	}
	if (sorted != 1)
	{
		sorted = 1;
		index = 0;
		while (index < length - 1)
		{
			if ((*f)(tab[index], tab[index + 1]) > 0)
				return (0);
			index++;
		}
	}
	return (1);
}
