//��������� : �������� ����
//		   : + - 8 / % = 
//		   : += -= *= /= %=
//         : ++ --

#include <stdio.h>

int main() {
	int a = 5;
	printf("a�� ���� %d����...\n", a);
	a = a + 3; // = : ���� ������
	printf("3�� ���ߴ��� %d�� ���...\n", a);

	/*-----------------------------------------------*/

	//+= -= *= /= %=
	int b = 5;

	b += 6; // b = b + 6
	printf("%d\n", b);
	b *= 7; // b = b * 7
	printf("%d\n", b);
	b -= 6; // b = b - 6
	printf("%d\n", b);
	b %= 7; // b = b % 7
	printf("%d\n", b);

	/*---------------------------------------------*/

	//++ --
	int c = 10;

	c++;
	printf("%d\n", c);

	c--;
	printf("%d\n", c);

	/*-------------------------------------------*/

	// ��ġ�� ��ġ

	// ��ġ : �� ���, �� ����
	// a++, b = a (ǥ���� ��ġ ������ ������
	//			   ��� �ڿ� �ϱ⿡ ��ġ�� �ش���)
	int d = 10, e;

	printf("--��ġ ����--\n");
	e = ++d;
	printf("a : %d\n", d);
	printf("b : %d\n", e);

	// ��ġ : �� ����, �� ���
	// b = a, a++ (b = a++�� ���� �������� ǥ��)
	printf("--��ġ ����--\n");
	e = 0, d = 10;
	e = d++;
	printf("a : %d\n", d);
	printf("b : %d\n", e);
}