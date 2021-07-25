#include "cell.h"

t_cell	make_cell(int size)
{
	t_cell	s_cell;

	s_cell.values_pool = mat_alloc1(size);
	s_cell.correct_value = 0;
	return s_cell;
}

void	solve_cell(t_cell s_cell, int value)
{
	if(s_cell.correct_value != 0)
	{
		s_cell.correct_value = value;
		ft_print("Solved");
		return;
	}
	ft_print("Error!\n");
}