#include <unistd.h>

void ft_print_numbers(){
    int i = '0';
    while(i!='9'+1){
        ft_putchar(i);
        i++;
    };
}
