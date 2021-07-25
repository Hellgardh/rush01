#include "skyscraper.h"

int	**calc_solution(int *input)
{
    int		size;
	t_cell	**s_cells;
	t_clues	s_clues;

	size = 4;
	s_cells = cell_alloc(size);
	init_cells(s_cells, size);
	s_clues = make_clues(input, size);
	increase_input_values(input, size);
	solve_puzzle(s_cells, s_clues, size);
	return (0);
}

void	increase_input_values(int *input, int size)
{
	int i;

	i = 0;
	size = size * size;
	while (i < size)
	{
		input[i]++;
		i++;
	}
}

void	init_cells(t_cell **s_cells, int size)
{
	int	i;
	int	j;
	int	k;
	
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			k = 0;
			while (k < size)
			{
				s_cells[i][j].values_pool[k] = 0;
				k++;
			}
			j++;
		}
		i++;
	}
}

void	solve_puzzle(t_cell **s_cells, t_clues s_clues, int size)
{
	init_process(s_cells, s_clues, size);
}

void	init_process(t_cell **s_cells, t_clues s_clues, int size)
{
	int	row;
	int	col;
	// int	temp;

	row = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			/* limits_cases */
			if((s_clues.left[row] || s_clues.right[row]) == 1 && col == 0)
				solve_cell(s_cells[row][col], size);
			else if(s_clues.left[row] == size)
				solve_cell(s_cells[row][col], col + 1);
			else if(s_clues.right[row] == size)
				solve_cell(s_cells[row][col], size - col);
			/* in_betweens_cases */


			col++;
		}
		row++;
	}
}

// void	limits_case(t_cell s_cell, t_clues s_clues, int size)
// {
// 	if((s_clues.left[row] || s_clues.right[row]) == 1 && col == 0)
// 	solve_cell(s_cell[row][col], size);
// 	else if(s_clues.left[row] == size)
// 		solve_cell(s_cell[row][col], col + 1);
// 	else if(s_clues.right[row] == size)
// 	{
// 		solve_cell(s_cell[row][col], size - col);
// 	}
// }
