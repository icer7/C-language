/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 16:42:17 by rysato            #+#    #+#             */
/*   Updated: 2020/08/19 16:42:18 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_UTILS_H
# define FT_TAIL_UTILS_H

int		open_file(char *executable, char *path);

int		close_file(char *executable, char *path, int fd);

void	show_error(char *executable, char *path);

char	*read_full(int fd, unsigned long *total_read);

#endif
