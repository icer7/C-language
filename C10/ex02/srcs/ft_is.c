/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 16:44:22 by rysato            #+#    #+#             */
/*   Updated: 2020/08/19 16:44:23 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_is_in_string(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

bool	ft_is_whitespace(char c)
{
	return (ft_is_in_string(c, "\t\n\v\f\r "));
}

bool	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}
