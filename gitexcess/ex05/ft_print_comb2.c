#include <unistd.h>

void ft_print_comb2(void){
    int i='0',j,k,l;
    while(i<'9'+1){
        j='0';
        while(j<'9'){
            k='0';
            while(k<'9'+1){
                l='0';
                while(l<'9'+1){
                    if(i=='9'&&j=='8'&&k=='9'&&l=='9'){
                        ft_putchar(i);
                        ft_putchar(j);
                        ft_putchar(' ');
                        ft_putchar(k);
                        ft_putchar(l);
                        ft_putchar('\n');
                    }else{
                        if(i<=k&&j<l){
                            ft_putchar(i);
                            ft_putchar(j);
                            ft_putchar(' ');
                            ft_putchar(k);
                            ft_putchar(l);
                            ft_putchar(' ');
                            ft_putchar(',');
                        }
                    }l=l+1;
                }k=k+1;
            }j=j+1;
        }i=i+1;
    }
}
