/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 16:20:02 by rysato            #+#    #+#             */
/*   Updated: 2020/08/19 16:20:04 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <stdbool.h>

# define IN 0
# define OUT 1
# define ERR 2
# define BUFFER_SIZE 1024

void	stdin_loop();

bool	cat(char **paths, int count, int offset);

void	str_write(int fd, char *str);

#endif
