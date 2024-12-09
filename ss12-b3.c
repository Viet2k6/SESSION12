#include <stdio.h>
int fata(int a) {
    if (a < 0) {
        printf("So am khong ton tai giai thua\n");
        return -1; 
    }
    if (a == 0) {
        return 1; 
    }
    return a * fata(a - 1); 
}
int main() {
    int num = 6; 
    int result = fata(num);
    if (result != -1) { 
        printf("Giai thua cua %d la: %d\n", num, result);
    }
    return 0;
}
