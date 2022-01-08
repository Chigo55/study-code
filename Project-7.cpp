#include <stdio.h>

int main() {
	// EX 1

	float a, b;
	
	printf("���� ���� ���� 2���� �Է��ϼ��� ex) 10.54 34 : ");

	scanf_s("%f%f", &a, &b);

	float sum = a + b;

	printf("�� ���� %f + %f �� ���� %f �Դϴ�.\n", a, b, sum);

	/*-----------------------------------------------------------*/

	//EX 2

	float a, b;

	printf("Ű(m) : ");
	scanf_s("%f", &a);
	printf("ü��(kg) : ");
	scanf_s("%f", &b);

	float bmi = b / (a * a);

	printf("BMI : %f", bmi);

	/*-----------------------------------------------------------*/

	//EX 3

	char a;

	printf("���ĺ��� �Է��ϼ���(Z ����) : ");
	scanf_s("%c", &a);
	printf("������ �� ���ĺ��� %c �Դϴ�.", a + 1);
	
}