#include <unistd.h>

void ft_print_comb(){
    int i='0',j,k;
    while(i<'7'+1){
        j='0';
        while(j<'8'+1){
            k='0';
            while(k<'9'+1){
                if(i=='7' && j=='8' && k=='9'){
                    ft_putchar(i);
                    ft_putchar(j);
                    ft_putchar(k);
                    ft_putchar('\n');
                }else{
                    if(i!=j&&j!=k&&i!=k){
                        ft_putchar(i);
                        ft_putchar(j);
                        ft_putchar(k);
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                }k=k+1;
            }j=j+1;
        }i=i+1;
    }
}
