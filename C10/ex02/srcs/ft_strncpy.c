/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 16:44:31 by rysato            #+#    #+#             */
/*   Updated: 2020/08/19 16:44:32 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_str_sized_copy(char *dest, char *src, unsigned int src_size)
{
	unsigned int	index;

	index = 0;
	while (index < src_size)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
