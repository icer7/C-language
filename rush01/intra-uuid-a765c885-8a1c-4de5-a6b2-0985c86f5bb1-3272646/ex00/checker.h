/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 20:38:39 by htomohit          #+#    #+#             */
/*   Updated: 2020/08/16 21:11:37 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "boolean.h"
# include "constraint.h"

# define DIR_L_T_R 1
# define DIR_R_T_L -1
# define DIR_U_T_D 1
# define DIR_D_T_U -1

t_bool	check_grid_validity(int **grid, int size, t_constr cnstr[4]);

#endif
