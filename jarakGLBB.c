/*Nama File : jarakGLBB.c*/
/*Deskripsi : Menghitung dan menampilkan jarak yang ditempuh benda yang mengalami GLBB*/

#include<stdio.h>/*Header File*/

    int main(){/*Program Utama*/

/*Kamus*/
    int Vo;/*Kecepatan awal, meter perdetik*/
    int t;/*Waktu, detik*/
    int a;/*Percepatan, meter perdetik kuadrat*/
    int s;/*Jarak, meter*/

/*Algoritma*/
printf("=======Menghitung Jarak Benda yang Mengalami GLBB=======\n");
printf("========================================================\n");
printf("\nMasukan Kecepatan Awal(Vo)=");
    scanf("%d",&Vo);/*input*/
printf("\nMasukan Waktu yang ditempuh (t)=");
    scanf("%d",&t);/*input*/
printf("\nMasukan Percepatan(a)=");
    scanf("%d",&a);/*input*/

s = (Vo * t)+(0.5*(a*t*t));/*(Proses) hitung jarak yang ditempuh benda*/

/*output*/
printf("\n======================================================\n");
printf("Jarak yang ditempuh benda yang mengalami GLBB(Vo X t + (0.5 X (a X t X t))==>%dX%d+(0.5X(%d%dX%d))=%d\n",Vo,t,a,t,t,s);

printf("========================================================\n");
    return 0;
}
