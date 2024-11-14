#include <stdio.h>

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIdx]) 
                minIdx = j;
        }
        int temp = a[minIdx];
        a[minIdx] = a[i];
        a[i] = temp;
    }
}

void printaay(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
<<<<<<< HEAD
    int a[] = {64, 25, 12, 22, 11};
    int n = sizeof(a) / sizeof(a[0]);
    selectionSort(a, n);
    printf("Sorted aay: \n")
    printaay(a, n);
=======
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
>>>>>>> b6f469c564753de743ea64f954ee66c864958c4d
    return 0;
}
