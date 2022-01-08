// 중첩 if 문
// 중괄호 코딩 스타일

#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            printf("%d\n", a);
        }
        else{ // c > a
            printf("%d\n", c);
        }
    }
    else { // b > c
        if (b > c) {
            printf("%d\n", b);
        }
        else { // c > b
            printf("%d\n", c);
        }

    /*------------------------------------------------------*/

    // short code 1

    if (a > b) {
        if (a > c) {
            printf("%d\n", a);
        }
        else{ // c > a
            printf("%d\n", c);
        }
    }
    else if (b > c) {
        printf("%d\n", b);
    }
    else { // c > b
        printf("%d\n", c);
    }

    /*------------------------------------------------------*/

    // short code 2
    // 따옴표가 중괄호 안에 1개만 존재할 시
    // 중괄호를 생략 할 수 있다.

    if (a > b) {
        if (a > c)
            printf("%d\n", a);
        else // c > a
            printf("%d\n", c);
    }
    else if (b > c) 
        printf("%d\n", b);
    else  // c > b
        printf("%d\n", c);   
    
    /*------------------------------------------------------*/

    // short code 3
    // 조건문 다음의 줄바꿈도 생략 가능

    if (a > b) {
        if (a > c) printf("%d\n", a);
        else printf("%d\n", c);
    } else if (b > c) printf("%d\n", b);
    else printf("%d\n", c);
}