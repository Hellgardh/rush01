#ifndef CELL_H
#define CELL_H

typedef struct t_cell 
{
	int	correct_value;
	int	*values_pool;
} t_cell;

t_cell	make_cell(int size);
void	solve_cell(t_cell s_cell, int value);

#endif

void	*mat_alloc1(int size);
void	ft_print(char *str);