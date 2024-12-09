#include <stdio.h>
int calculateSum(int a, int b) {
    return a + b; 
}
int main() {
    int i, j, sum;
    printf("Nhap so thu nhat: ");
    scanf("%d", &i);
    printf("Nhap so thu hai: ");
    scanf("%d", &j);
    sum = calculateSum(i, j);
    printf("Tong cua %d va %d la: %d\n", i, j, sum);
    return 0;
}
