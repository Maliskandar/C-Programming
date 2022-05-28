// Nama      : Muhammad Akmal Iskandar
// NIM       : 24060121140094
// Nama file : insertion_sort.c
// Tanggal   : 28 Mei 2022
// Deskripsi : Mengurutkan data inputan array dengan cara membandingkan dan mengurutkan dua data pertama pada array



#include <stdio.h>
#include "fungsi_arr.c"

void insertionSort(int arr[], int n){
    //Kamus lokal
    int i, j, key;

    //Algoritma
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){
    //Kamus lokal
    int arr[]={12,34,56,78,13,15,27,29,50,95};
    int n;

    //Algoritma
    n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    insertionSort(arr, n);
    printArr(arr, n);

    return 0;
}
