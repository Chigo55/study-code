#include <stdio.h>

int main() {
	/* <- 줄 상관없이 주석처리 가능 -> */
	// int : 32비트(4바이트), 정수를 담는데 쓰임
	int a = 5;
	int b = 3;

	int sum = a + b;
	int sub = a - b;
	int div = a * b;
	int quo = a / b;
	int rem = a % b;

	printf("%d + %d = %d\n", a, b, sum);
	printf("%d - %d = %d\n", a, b, sub);
	printf("%d * %d = %d\n", a, b, div);
	printf("%d / %d = %d\n", a, b, quo);
	printf("%d %% %d = %d\n", a, b, rem);
	

	// float : 32비트(4바이트), 실수를담는데 쓰임
	//         나머지 연산자 사용 불가능
	float a = 9.8;
	float b = 3.14;

	float sum = a + b;
	float sub = a - b;
	float div = a * b;
	float quo = a / b;

	printf("%f + %f = %f\n", a, b, sum);
	printf("%f - %f = %f\n", a, b, sub);
	printf("%f * %f = %f\n", a, b, div);
	printf("%f / %f = %f\n", a, b, quo);

	// double : 64비트(8바이트), 실수를담는데 쓰임
	//		    나머지 연산자 사용 불가능
	double a = 9.8;
	double b = 3.14;

	double sum = a + b;
	double sub = a - b;
	double div = a * b;
	double quo = a / b;

	printf("%f + %f = %f\n", a, b, sum);
	printf("%f - %f = %f\n", a, b, sub);
	printf("%f * %f = %f\n", a, b, div);
	printf("%f / %f = %f\n", a, b, quo);
}