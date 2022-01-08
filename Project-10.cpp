#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 == 0) {
        // n % 2 == 0 -> n % 2
        printf("n은 짝수\n");
    }
    else {
        printf("n은 홀수");
    }

    /*---------------------------------------*/

    if (1) {
        printf("***\n");
    }
    else {
        printf("$$$\n");
    }

    /*-----------------------------------------*/

    int a;
    scanf("%d", &a);

    if (a > 0) {
        printf("n은 양수\n");
    }
    else if (n == 0) {
        printf("n은 0\n");
    }
    else {
        printf("n은 음수\n");
    }
    
}