// Nama         : Muhammad Akmal Iskandar
// NIM          : 24060121140094
// Tanggal      : 28 Maret 2022
// Nama Program : UpahKerja.c
/* Deskripsi    : menampilkan upah pekerja untuk 4 buah golongan dengan dua kondisi untuk jam kerja yakni kurang dari 40 jam dan lebih dari 40 jam dengan kelebihannya
                  dihitung 1.5 kali dari upah yang diberikan*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    /*Kamus*/
    int gol,t;

    /*Algoritma*/
    printf("Masukkan golongan kerja (1 hingga 4) : ");
    scanf("%d",&gol);
    printf("Waktu kerja dalam seminggu : ");
    scanf("%d", &t);
    if(t<=40){
        switch (gol){
        case 1 :
            printf("%d", t*1000);
            break;
        case 2 :
            printf("%d", t*1500);
            break;
        case 3 :
            printf("%d", t*2000);
            break;
        case 4:
            printf("%d", t*2500);
            break;
        }
    }
    else {
        switch (gol){
        case 1 :
            printf("%d", 40*1000 + (t-40)* 1500);
            break;
        case 2 :
            printf("%d", 40*1500 + (t-40)* 2250);
            break;
        case 3 :
            printf("%d", 40*2000 + (t-40)* 3000);
            break;
        case 4:
            printf("%d", 40*2500 + (t-40)* 3750);
            break;
        }
    }
    return 0;
}
