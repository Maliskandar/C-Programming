void maxArr(int arr[], int n, int *max){
    //Kamus lokal
    int i;
    *max = arr[0];

    //Algoritma
    for (i = 1; i < n; i++){
        if (arr[i] > *max){
            *max = arr[i];
        }
    }
}

void printArr(int arr[], int n){
    //Kamus lokal
    int i;

    //Algoritma
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b){
    //Kamus lokal
    int temp;

    //Algoritma
    temp = *a;
    *a = *b;
    *b = temp;
}
