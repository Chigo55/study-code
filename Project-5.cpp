#include <stdio.h>

int main() {
	int a1, b1;
	
	scanf_s("%d%d", &a1, &b1); // & : ������

	int sum1 = a1 + b1;
	int sub1 = a1 - b1;
	int div1 = a1 * b1;
	int quo1 = a1 / b1;

	printf("%d + %d = %d\n", a1, b1, sum1);
	printf("%d - %d = %d\n", a1, b1, sub1);
	printf("%d * %d = %d\n", a1, b1, div1);
	printf("%d / %d = %d\n", a1, b1, quo1);

	/*---------------------------------------------*/

	float a2, b2;

	scanf_s("%d%d", &a2, &b2); // & : ������

	float sum2 = a2 + b2;
	float sub2 = a2 - b2;
	float div2 = a2 * b2;
	float quo2 = a2 / b2;

	printf("%d + %d = %d\n", a2, b2, sum2);
	printf("%d - %d = %d\n", a2, b2, sub2);
	printf("%d * %d = %d\n", a2, b2, div2);
	printf("%d / %d = %d\n", a2, b2, quo2);
	
}