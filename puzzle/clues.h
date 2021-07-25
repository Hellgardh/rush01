#ifndef CLUES_H
#define CLUES_H
#include <stdlib.h>
typedef	struct t_clues
{
	int *top;
	int *bottom;
	int *left;
	int *right;
} t_clues;

t_clues make_clues(int *clues, int size);

#endif

void	*mat_alloc2(int qt_row, int size_row);
void    *mat_alloc1(int size);
void	setup_clues(int **clues_sides, int size, int *input);
void	alloc_clues(int **clues_sides, int size);
