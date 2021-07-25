
#include "header.h"

/* trabalhar com as entradas*/
int main(int argc, char *argv[])
{
   if (argc != 2)
    {
        ft_print("Error with argc");
        return 1;
    }
    int *ptr = ft_split(argv[1]);
    calc_solution(ptr);
   
}

/*int main(int argc, char *argv[]) {
   // int *ptr = ft_split(argv[1]);
    //calc_solution(ptr[4]);
    //printf("%d ", sizeof(int *));
    return 0;
}*/