#include <stdio.h>

int main() {
	/* <- �� ������� �ּ�ó�� ���� -> */
	// int : 32��Ʈ(4����Ʈ), ������ ��µ� ����
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
	

	// float : 32��Ʈ(4����Ʈ), �Ǽ�����µ� ����
	//         ������ ������ ��� �Ұ���
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

	// double : 64��Ʈ(8����Ʈ), �Ǽ�����µ� ����
	//		    ������ ������ ��� �Ұ���
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