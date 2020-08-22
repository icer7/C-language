/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysato <rysato@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 13:19:51 by rysato            #+#    #+#             */
/*   Updated: 2020/08/18 13:19:52 by rysato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# include <stdbool.h>

# define BUFFER_SIZE 1024

# define MSG_ERR_NO_FILE "File name missing.\n"
# define MSG_ERR_TOO_MANY_ARGS "Too many arguments.\n"
# define MSG_ERR_CANNOT_READ "Cannot read file.\n"

# define IN 0
# define OUT 1
# define ERR 2

bool	display_file(char *path);

void	str_write(int fd, char *str);

#endif
