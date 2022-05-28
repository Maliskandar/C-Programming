// Nama      : Muhammad Akmal Iskandar
// NIM       : 24060121140094
// Nama file : selection_sort.c
// Tanggal   : 28 Mei 2022
// Deskripsi : Mengurutkan data inputan array dengan cara mencari nilai terendah / tertinggi di dalam array



#include <stdio.h>
#include "fungsi_arr.c"

void selectionSort(int arr[], int n){
    //Kamus lokal
    int i, j, min;

    //Algoritma
    for (i = 0; i < n-1; i++){
        for (j = i+1; j < n; j++){
            min = i;
            if (arr[j] < arr[min]){
                min = j;
            }
            swap(&arr[i], &arr[min]);
        }
    }
}

int main(){
    //Kamus
    int arr[]={12,34,56,78,13,15,27,29,50,95};
    int n;

    //Algoritma
    n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    selectionSort(arr, n);
    printArr(arr, n);

    return 0;
}
