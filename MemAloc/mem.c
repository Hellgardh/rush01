#include "mem.h"
#include "../puzzle/cell.h"

void * array_alloc(int size) {
    void *ptr;
    if ((ptr = malloc(size)) == 0) {
        ft_print("Out of Memory");
        return 0;
    }
    return ptr;    
}

void	*mat_alloc1(int size)
{
	void *ptr;
	ptr = malloc(size * sizeof(int));
	if(ptr == NULL)
	{
		ft_print("Out of Memory");
		return (0);
	}
	return (0);
}

void *cell_alloc(int size)
{
	int i;
	
	void **ptr;
	ptr = malloc(size * sizeof(t_cell*));
	if (ptr == NULL)
	{
		ft_print("Out of Memory");
		return (0);
	}
	i = 0;
	while (i < size)
	{
		ptr[i] = malloc(size * sizeof(t_cell));
		if (ptr[i] == NULL)
		{
			ft_print("Out of Memory");
			return (0);
		}
		i++;
	}
	return (0);
}


void * mat_alloc2(int qt_row, int size_row) {
    void **ptr;
    if ((ptr = malloc(qt_row * sizeof(int *))) == 0) {
        ft_print("Out of Memory");
        return 0;
    }
    for (int i = 0; i < size_row; i++)
        if ((ptr[i] = malloc(sizeof(int) * size_row)) == 0) {
        ft_print("Out of Memory");
        return 0;
    }
    return ptr;    
}

void *mat_alloc3(int size_x, int size_y, int size_z)
{
    int i;
    int j;
    int ***ptr;

    i = 0;
    j = 0;
    ptr = (int***)malloc(size_x * sizeof(int**));
    if (ptr == NULL)
    {
        ft_print("Out of Memory");
        return (0);
    }
    while (i < size_y)
    {
        ptr[i] = (int**)malloc(size_y * sizeof(int*));
        j = 0;
        if (ptr[i] == NULL)
        {
            ft_print("Out of Memory");
            return (0);
        }
        while (j < size_z)
        {
            ptr[i][j] = (int*)malloc(size_z * sizeof(int));
            if (ptr[i][j] == NULL)
            {
                ft_print("Out of Memory");
                return (0);
            }
            j++;
        }
        i++;
    }
	return (0);
}
