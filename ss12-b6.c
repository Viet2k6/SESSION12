#include <stdio.h>
int perfect(int a) {
    int i, sum = 0;
    
    if (a <= 1) {
        return 0;  
    }
    for (i = 1; i <= a / 2; i++) {
        if (a % i == 0) {
            sum += i;  
        }
    }
    if (sum == a) {
        return 1;  
    }
    return 0;  
}

int main() {
    int firstNum, secondNum;
    printf("Moi nhap so nguyen thu nhat: ");
    scanf("%d", &firstNum);
    printf("Moi nhap so nguyen thu hai: ");
    scanf("%d", &secondNum);
    if (perfect(firstNum)) {
        printf("%d la so hoan hao \n", firstNum);
    } else {
        printf("%d ko la so hoan hao\n", firstNum);
    }
    if (perfect(secondNum)) {
        printf("%d la so hoan hao \n", secondNum);
    } else {
        printf("%d ko la so hoan hao \n", secondNum);
    }
    return 0;
}
