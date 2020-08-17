/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraint.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 20:25:09 by htomohit          #+#    #+#             */
/*   Updated: 2020/08/16 21:12:06 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONSTRAINT_H
# define CONSTRAINT_H

# define UP 0
# define DOWN 1
# define LEFT 2
# define RIGHT 3

typedef struct	s_constr
{
	int	size;
	int	*v;
}				t_constr;

t_constr		create_constraint(int size, char *str, int offset);

#endif
