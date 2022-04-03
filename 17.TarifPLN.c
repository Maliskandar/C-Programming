// Nama         : Muhammad Akmal Iskandar
// Nama File 	: 17.TarifPLN
// Deskripsi 	: Menentukan besar tarif listrik yang telah dikenakan, lalu tampilkan besar tarif listrik tersebut

# include<stdio.h>
int main(){
// Kamus
  int d,g,hasil;

// Algoritma
  printf("program menghitung tarif listrik yang dikenakan\n");
  printf("masukan jumlah daya listrik yang dipakai /kWh =  ");
  scanf("%d", &d);
  printf("masukan golongan yang dipilih 1 atau 2 = ");
  scanf("%d", &g);

    if (g == 1)
    {
        if (d < 100)
        {
            hasil = 100 * 1000;
            printf("biaya yang harus dibayar sebesar %d", hasil);
        }
        else if (d >= 100 && d < 1000)
        {
            //d>=100
            hasil = (d * 1000);
            printf("biaya yang harus dibayar sebesar %d", hasil);
        }
        else if (d >= 1000)
        {     //d>=1000
            hasil = (d * 1000) + 0.1 *(d * 1000);
            printf("biaya yang harus dibayar sebesar %d", hasil);
        }
    }
    else if (g == 2)
        {
        if (d < 100)
        {
            hasil = 100 * 2000;
            printf("biaya yang harus dibayar sebesar %d", hasil);
        }
        else if (d >= 100 && d < 1000)
        {
            //d>= 100
            hasil = (d * 2000);
            printf("biaya yang harus dibayar sebesar %d", hasil);
        }
        else if (d >= 1000){    //d>= 100
            hasil = (d * 2000) + 0.1*(d * 2000);
            printf("biaya yang harus dibayar sebesar %d", hasil);
        }

    else{
        printf("masukan golongan yang sesuai!!");
    }
 }       return 0;
}
