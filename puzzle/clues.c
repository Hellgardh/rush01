#include "clues.h"

/*
col1up col2up col3up col4up
col1down col2down col3down col4down
row1left row2left row3left row4left
row1right row2right row3right row4right
*/

t_clues	make_clues(int *input, int size)
{
	t_clues s_clues;
	int *clues_sides[4] = {s_clues.top, s_clues.bottom, s_clues.left, s_clues.right};

	setup_clues(clues_sides, size, input);
	return s_clues;
}

void	setup_clues(int **clues_sides, int size, int *input)
{
	int i;
	int j;
	int current_input;

	i = 0;
	current_input = 0;
	alloc_clues(clues_sides, size);
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			clues_sides[i][j] = input[current_input];
			current_input++;
			j++;
		}
		i++;
	}
}

void	alloc_clues(int **clues_sides, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		clues_sides[0][i] = (int)malloc(size * sizeof(int));
        if(clues_sides[0][i])
		i++;
	}
}
