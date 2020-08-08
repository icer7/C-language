/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 15:42:03 by rysato            #+#    #+#             */
/*   Updated: 2020/08/08 15:42:08 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strlowcase(char *str)
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
		if (box >= 'A' && box <= 'Z')
		{
			str[index] = box + 32;
		}
		index++;
	}
	return (str);
}
