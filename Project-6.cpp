// char : 1byte ������ (int : 4byte)
// character : ���� (�ݰ� ���� = ABCabc123_+?)
//                 (�������� = �ѱ�, ����, �Ϻ��� ���)

#include <stdio.h>
//int main() {
//	char a = 43;
//	
//	printf("%d\n", a);
//	printf("%c\n", 43); // "+" == 43
//}

// ASCII : American Standard Code (����-����)

int main() {
	char a;
	int b;

	printf("���� �Է� : ");
	scanf_s("%c", &a);
	printf("%c�� ASCII �� : %d\n", a, a);

	/*------------------------------------------*/

	printf("���� �Է� : ");
	scanf_s("%d", &b);
	printf("%d�� ASCII �� : %c\n", b, b);
	
}