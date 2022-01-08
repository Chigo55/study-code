#include <stdio.h>

int main() {
	// EX 1

	float a, b;
	
	printf("합을 구할 숫자 2개를 입력하세요 ex) 10.54 34 : ");

	scanf_s("%f%f", &a, &b);

	float sum = a + b;

	printf("두 숫자 %f + %f 의 합은 %f 입니다.\n", a, b, sum);

	/*-----------------------------------------------------------*/

	//EX 2

	float a, b;

	printf("키(m) : ");
	scanf_s("%f", &a);
	printf("체중(kg) : ");
	scanf_s("%f", &b);

	float bmi = b / (a * a);

	printf("BMI : %f", bmi);

	/*-----------------------------------------------------------*/

	//EX 3

	char a;

	printf("알파벳을 입력하세요(Z 제외) : ");
	scanf_s("%c", &a);
	printf("다음에 올 알파벳은 %c 입니다.", a + 1);
}