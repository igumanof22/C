#include <stdio.h>

void main(){
    int x;

    printf("Masukan bilangan : "); scanf("%d", &x);

    if (x %2 == 0){
        printf("\n%d merupakan bil. GENAP\n",x);
    }
    else{
        printf("\n%d merupakan bil. GANJIL\n",x);
    }
}
