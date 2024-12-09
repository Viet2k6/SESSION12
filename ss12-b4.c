#include <stdio.h>
int findMax(int arr[], int size) {
    int i;
    int max = arr[0]; 
    for (i = 1; i < size; i++) { 
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int arr[5] = {6, 1, 4, 8, 3};
    int size = sizeof(arr) / sizeof(arr[0]); 

    printf("So lon nhat trong mang la: %d\n", findMax(arr, size));

    return 0;
}
