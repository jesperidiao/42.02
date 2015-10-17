#include <unistd.h>

void ft_putnbr(int nb){
    int n,cont=1;
    if(nb<0){
        ft_putchar('-');
        nb = -1 * nb;
    }
    n = nb;
    while(n>9){
        n=nb/cont;
        cont=cont*10;
    }
    cont=cont/10;
    if (cont==0){
        ft_putchar(n+'0');
    }
    while(cont>0){
        n=nb/cont;
        ft_putchar(n+'0');
        nb = nb % cont;
        cont=cont/10;
    }
}
