#include <stdio.h>

void main(){
    int x;

    printf("Masukan bilangan : "); scanf("%d", &x);

    if (x > 0){
        printf("\n%d merupakan bil. POSITIF\n",x);
    }
    else if (x == 0){
        printf("\n%d merupakan bil. NOL\n",x);
    }
    else{
        printf("\n%d merupakan bil. NEGATIF\n",x);
    }
}
