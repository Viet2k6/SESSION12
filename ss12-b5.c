#include <stdio.h>
int prime(int a) {
    if (a <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int firstNum, secondNum;
    printf("Moi nhap so nguyen thu nhat: ");
    scanf("%d", &firstNum);
    printf("Moi nhap so nguyen thu hai: ");
    scanf("%d", &secondNum);

    if (prime(firstNum)) {
        printf("%d la so nguyen to\n", firstNum);
    } else {
        printf("%d ko la so nguyen to\n", firstNum);
    }

    if (prime(secondNum)) {
        printf("%d la so nguyen to\n", secondNum);
    } else {
        printf("%d ko la so nguyen to\n", secondNum);
    }
    return 0;
}
