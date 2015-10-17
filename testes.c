#include <unistd.h>

void ft_putchar(int c){
    write(1,&c,1);
}

//ex00
void ft_print_alphabet(){
    int i = 'a';
    while(i<'z'+1){
        ft_putchar(i);
        i=i+1;
    };
}
//ex01
void ft_print_reverse_alphabet(){
    int i = 'z';
    while(i>'a'-1){
        ft_putchar(i);
        i=i-1;
    };
}
//ex02
void ft_print_numbers(){
    int i = '0';
    while(i!='9'+1){
        ft_putchar(i);
        i++;
    };
}
//ex03
void ft_is_negative(int n){
    if(n<0){
        ft_putchar('N');
    } else ft_putchar('P');
}
//ex04
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
                }
                k=k+1;
            }
            j=j+1;
        }i=i+1;
    }
}
//ex05
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
//ex06
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
//ex07
void ft_print_combn(int n){
    int nb[10],k=0,i=0;
    nb[0]=0;
    while(nb[0]<=10-n){
        while(k<n){
            nb[n-k]=k;
            k++;
        };
        while(nb[n-k]<10){
            k=0;
            while(k<n)
            {
                ft_putchar(nb[n-k]+'0');
                k++;
            }
            ft_putchar(',');
            ft_putchar(' ');
            nb[n-k]+=1;
            i++;
        };
    }
}

//tests

int main(void)
{
    ft_print_combn(3);
    return 0;
}
