/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_out.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 16:42:09 by rysato            #+#    #+#             */
/*   Updated: 2020/08/19 16:42:11 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_OUT_H
# define FT_TAIL_OUT_H

void	tail_by_lines(int fd);

void	tail_by_byte_count(int fd, unsigned int byte_to_read);

#endif
