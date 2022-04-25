// Nama     	: Muhammad Akmal Iskandar
// NIM          : 24060121140094
// Nama File 	: SeqSearch.c
// Deskripsi 	: Membuat program pencarian Sequential tanpa Boolean dan dengan menggunakan Boolean
// Tgl Pembuatan: Sabtu, 16 April 2022

#include <stdio.h> //header file
#include <stdbool.h>

int seqSearchNonBoolean(int T[], int N, int X);
int seqSearchBoolean(int T[], int N, int X);

//Program Utama
int main()
{
    //Kamus
    int T[8] = {1,3,5,-8,12,90,3,5};
    int N = 8;
    int X = 5;
    int IX;

    //Algoritma
    IX = seqSearchNonBoolean(T,N,X);
    if(IX != -1){
        IX = IX + 1;
        printf("IX = %d \n", IX);
    }
    else{
        printf("IX = 0 \n");
    }

    IX = seqSearchBoolean(T,N,X);
    if(IX != -1){
        IX = IX + 1;
        printf("IX = %d", IX);
    }
    else{
        printf("IX = 0");
    }

    return 0;
}

int seqSearchNonBoolean(int T[], int N, int X)
{
    //Kamus Lokal
    int i; //Counter

    //Algoritma
    i = 0;
    while(i < N-1 && T[i] != X){
        i = i + 1;
    }
    if(T[i] == X){
        return i;
    }
    else{
        return -1;
    }
}
int seqSearchBoolean(int T[], int N, int X)
{
    //Kamus Lokal
    int i; //Counter
    bool Found;

    //Algoritma
    Found = false;
    i = 0;
    while(i <= N && ! Found){
        if(T[i] == X){
            Found = true;
        }
        else{
            i = i + 1;
        }
    }
    if(Found){
        return i;
    }
    else{
        return -1;
    }
}
