/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomohit <htomohit@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 20:45:41 by htomohit          #+#    #+#             */
/*   Updated: 2020/08/16 20:45:44 by htomohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "solver.h"
#include "boolean.h"
#include "constraint.h"
#include "checker.h"
#include "bruteforce_search.h"
#include "pretty_print.h"

int		**create_grid(int size)
{
	int	index;
	int	jndex;
	int	**grid;

	grid = (int **)malloc((size + 1) * sizeof(int *));
	index = 0;
	while (index < size)
	{
		grid[index] = (int *)malloc((size + 1) * sizeof(int));
		jndex = 0;
		while (jndex < size + 1)
		{
			grid[index][jndex] = 0;
			jndex++;
		}
		index++;
	}
	grid[size] = 0;
	return (grid);
}

void	free_grid(int **grid, int size)
{
	int	index;

	index = 0;
	while (index < size)
	{
		free(grid[index]);
		index++;
	}
	free(grid);
}

t_bool	validate_constraint(int size, t_constr cstr[4])
{
	int	max;
	int	index;

	max = size + 1;
	index = 0;
	while (index < size)
	{
		if ((cstr[UP].v[index] + cstr[DOWN].v[index]) > max)
			return (false);
		if ((cstr[LEFT].v[index] + cstr[RIGHT].v[index]) > max)
			return (false);
		index++;
	}
	return (true);
}

t_bool	solve(int grid_size, char *raw_args)
{
	t_constr	cnstr[4];
	int			**grid;
	t_bool		success;

	cnstr[UP] = create_constraint(grid_size, raw_args, grid_size * 0);
	cnstr[DOWN] = create_constraint(grid_size, raw_args, grid_size * 1);
	cnstr[LEFT] = create_constraint(grid_size, raw_args, grid_size * 2);
	cnstr[RIGHT] = create_constraint(grid_size, raw_args, grid_size * 3);
	grid = create_grid(grid_size);
	if (!validate_constraint(grid_size, cnstr))
		return (false);
	success = search_solution(grid, grid_size, cnstr);
	if (success)
		print_grid(grid, grid_size);
	free_grid(grid, grid_size);
	return (success);
}
