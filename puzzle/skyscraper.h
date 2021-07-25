
#ifndef FT_HEADER_H
#define FT_HEADER_H
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "clues.h"
#include "cell.h"
#endif

void	*mat_alloc2(int qt_row, int size_row);
void	init_cells(t_cell **s_cells, int size);
void    *mat_alloc3(int size_x, int size_y, int size_z);
void	*cell_alloc(int size);
void	ft_print(char *str);
void	increase_input_values(int *input, int size);
void	solve_puzzle(t_cell **s_cells, t_clues s_clues, int size);
void	init_process(t_cell **s_cells, t_clues s_clues, int size);
