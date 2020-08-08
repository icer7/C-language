/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 15:40:13 by rysato            #+#    #+#             */
/*   Updated: 2020/08/08 15:40:15 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strupcase(char *str)
{
	int		index;
	char	box;

	index = 0;
	while (true)
	{
		box = str[index];
		if (box == '\0')
		{
			break ;
		}
		if (box >= 'a' && box <= 'z')
		{
			str[index] = box - 32;
		}
		index++;
	}
	return (str);
}
