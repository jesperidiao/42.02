#include <unistd.h>

void ft_print_alphabet(){
    int i = 'a';
    while(i<'z'+1){
        ft_putchar(i);
        i=i+1;
    };
}
