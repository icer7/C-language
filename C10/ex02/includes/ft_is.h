/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 16:41:41 by rysato            #+#    #+#             */
/*   Updated: 2020/08/19 16:41:42 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IS_H
# define FT_IS_H

# include <stdbool.h>

bool	ft_is_in_string(char c, char *str);

bool	ft_is_whitespace(char c);

bool	ft_is_number(char c);

#endif
