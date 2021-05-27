#include <stdio.h>

void main(){
    float na;

    printf("Masukkan Nilai Angka : "); scanf("%f", &na);
    printf("\nKeterangan Nilai: \n\n\n");

    if(na >= 85 && na <= 100){
        printf("Nilai Angka     : %0.2f\n",na);
        printf("Nilai Mutu      : A\n");
        printf("Angka Mutu      : 4.00\n");
        printf("Sebutan Mutu    : Sangat Cemerlang\n");
    }
    else if(na >= 80 && na < 85){
        printf("Nilai Angka     : %0.2f\n",na);
        printf("Nilai Mutu      : A-\n");
        printf("Angka Mutu      : 3.75\n");
        printf("Sebutan Mutu    : Cemerlang\n");
    }
    else if(na >= 75 && na < 80){
        printf("Nilai Angka     : %0.2f\n",na);
        printf("Nilai Mutu      : B+\n");
        printf("Angka Mutu      : 3.50\n");
        printf("Sebutan Mutu    : Sangat Baik\n");
    }
    else if(na >= 70 && na < 75){
        printf("Nilai Angka     : %0.2f\n",na);
        printf("Nilai Mutu      : B\n");
        printf("Angka Mutu      : 3.00\n");
        printf("Sebutan Mutu    : Baik\n");
    }
    else if(na >= 65 && na < 70){
        printf("Nilai Angka     : %0.2f\n",na);
        printf("Nilai Mutu      : B-\n");
        printf("Angka Mutu      : 2.75\n");
        printf("Sebutan Mutu    : Hampir Baik\n");
    }
    else if(na >= 60 && na < 65){
        printf("Nilai Angka     : %0.2f\n",na);
        printf("Nilai Mutu      : C+\n");
        printf("Angka Mutu      : 2.50\n");
        printf("Sebutan Mutu    : Lebih dari Cukup\n");
    }
    else if(na >= 55 && na < 65){
        printf("Nilai Angka     : %0.2f\n",na);
        printf("Nilai Mutu      : C\n");
        printf("Angka Mutu      : 2.00\n");
        printf("Sebutan Mutu    : Cukup\n");
    }
    else if(na >= 50 && na < 55){
        printf("Nilai Angka     : %0.2f\n",na);
        printf("Nilai Mutu      : C-\n");
        printf("Angka Mutu      : 1.75\n");
        printf("Sebutan Mutu    : Hampir Cukup\n");
    }
    else if(na >= 40 && na < 50){
        printf("Nilai Angka     : %0.2f\n",na);
        printf("Nilai Mutu      : D\n");
        printf("Angka Mutu      : 1.00\n");
        printf("Sebutan Mutu    : Kurang\n");
    }
    else{
        printf("Nilai Angka     : %0.2f\n",na);
        printf("Nilai Mutu      : E\n");
        printf("Angka Mutu      : 0.00\n");
        printf("Sebutan Mutu    : Gagal\n");
    }
}
