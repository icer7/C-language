/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dumper.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 16:49:16 by rysato            #+#    #+#             */
/*   Updated: 2020/08/19 16:49:17 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DUMPER_H
# define FT_DUMPER_H

# include "ft_args_parser.h"

# define UINT unsigned int

void	ft_dump(t_options *options, char *content, UINT length, UINT lines);

#endif
