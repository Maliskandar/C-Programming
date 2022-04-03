// Nama            : Muhammad Akmal Iskandar
// Nama File       : 16.TunjAnak
// Deskripsi 	   : Menentukan besar tunjangan anak yang diberikan, lalu tampilkan besar tunjangan anak tersebut.

# include<stdio.h>
int main()
{
 // Kamus
   int a,g,hasil;

 // Algoritma
   printf("Program untuk menentukan tunjangan anak yang diberikan\n");
   printf("Ketiklah berapa jumlah anak yang diberikan = ");
   scanf("%d", &a);
   printf("Ketiklah besar gaji pokok = ");
   scanf("%d", &g);

 if (a >= 0 && a < 3)
    {
     hasil = a * (0.1 * g);
     printf("Tunjangan anak yang diberikan = %d",hasil);
    }
    else if (a >= 3)
    {
     hasil = 3 * (0.1 * g);
     printf("Tunjangan anak yang diberikan = %d",hasil);
    }
    else
    {
     //(a<0)
     printf("Jumlah anak yang anda masukkan tidak dapat ditemukan!");
    }
    return 0;
}
