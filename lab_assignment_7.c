//Program to compute the # of swaps needed for each index in the given array us1ng Bubble Sort
#include <stdio.h>

void bubbleSort(int arr[], int r){
    int i, j, swaps, temp;

    for (i = 0; i < r - 1; i++){
        swaps = 0;
        for (j = 0; j < r - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
        printf("# of swaps for index [%d] --> %d\n", i, swaps);

        if (swaps == 0){
            break;
        }
    }
}

int main(){
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int r = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, r);

    return 0;
}
