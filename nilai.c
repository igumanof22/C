#include <stdio.h>

void main(){
    float x;

    printf("Masukan bilangan (angka dibelakang koma hanya dua) : "); scanf("%f", &x);

    if (x >= 80){
        printf("\n%0.2f nilai hurufnya : A\n",x);
    }
    else if (x >= 70 && x < 80){
        printf("\n%0.2f nilai hurufnya : B\n",x);
    }
    else if (x >= 60 && x < 70){
        printf("\n%0.2f nilai hurufnya : C\n",x);
    }
    else if (x >= 50 && x < 60){
        printf("\n%0.2f nilai hurufnya : D\n",x);
    }
    else{
        printf("\n%0.2f nilai hurufnya : E\n",x);
    }
}
