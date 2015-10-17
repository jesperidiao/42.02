#include <unistd.h>

void ft_print_reverse_alphabet(){
    int i = 'z';
    while(i>'a'-1){
        ft_putchar(i);
        i=i-1;
    };
}
