// Nama      : Muhammad Akmal Iskandar
// Nama file : BiayaParkir.c
// Deskripsi : Menentukan besarnya biaya parkir berdasarkan lama parkir d

#include<stdio.h>
int main (){
// Kamus
    int d;//Lama parkir dalam jam
    int b;//Biaya parkir total

//Algoritma

printf("======menghitung besarnya biaya parkir======");
printf("\n============================================");
printf("\nMasukan lama parkir dalam jam(d)=");//input
    scanf("%d",&d);
printf("\n============================================");
if (d > 2){
    return b = 2000 + (d-2) * 500;//Aksi1
}
else {
    return b = 2000;//Aksi2
}
    return 0;
}
