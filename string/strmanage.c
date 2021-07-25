#include "strmanage.h"


int ft_count(char *str)
{
    int i = 0;
    while(*str)
    {
        str++;
        i++;
    }
    return i;
}
void ft_print(char *str) {
   write(1, str, ft_count(str));
   write(1, "\n", 1);
}

int ft_count_char(char *str, char ch) {
    int i = 0;

    while (*str) {
        if (*str == ch)
            i++;
        str++;
    }
    return i;
}

int convert(const char *str_ini, char *str_end) {
   int result = 0, mult = 1, digit = 0;

   while(str_end > str_ini) {
         str_end--;  
         digit = (int) (*str_end - '0');         
         result += digit * mult;
         mult *= 10;
     }   
  return result;
}

int ft_atoi(char **str) {
   char *w_str = *str;
   char *temp = *str;
   int i = 0;
   while(*w_str >= '0' && *w_str <= '9') 
   {
       w_str++;
       i++;
   }
  if (i > 1)
    *str += (i - 1);  
  return convert(temp, w_str);
}

void fill_int_array(char *str, int *array_int) {
    int i = 0;

    while(*str) {
        if (*str != SPACE)
            array_int[i++] = ft_atoi(&str); /*se for 2 numeros ele nn aumenta mais 2*/
        str++;
    }
}

int *ft_split(char *str) {
    int real_size = ft_count(str) - ft_count_char(str, SPACE);  
    int *ptr = (int *) array_alloc(real_size * 4);
    fill_int_array(str, ptr);
    return ptr;
}