/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce_search.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 20:24:22 by htomohit          #+#    #+#             */
/*   Updated: 2020/08/16 20:24:29 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRUTEFORCE_SEARCH_H
# define BRUTEFORCE_SEARCH_H

# include "boolean.h"
# include "constraint.h"

t_bool	search_solution(int **grid, int size, t_constr cnstr[4]);

#endif
