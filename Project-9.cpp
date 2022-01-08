// �� ������, ���� ������

#include <stdio.h>

int main() {
	//�� ������

	int a, b;
	scanf_s("%d%d", &a, &b);

	int p = a > b;
	int q = a < b;
	int r = a == b; // == : equal

	printf("%d %d %d\n", p, q, r);

	// a >= b : a�� b���� ũ�ų� ����
	// a <= b : a�� b���� �۰ų� ����
	// a != b : a�� b�� �ƴϴ�

	// bool : ������ ����� ���� (1byte)

	bool s = a > b;
	bool t = a < b;
	bool u = a == b;

	printf("%d %d %d\n", s, t, u);

	/*------------------------------------------*/

	//���� ������ (�׸���, �Ǵ�, ...)
	// && || !

	int c;
	scanf_s("%d", &c);

	bool v = (c >= 1) && (c <= 10); // 1<= c <= 10
	bool w = c == 3 || c == 7;
	bool x = !v; // x�� v�� �ƴϴ�

	printf("%d %d %d\n", v, w, x);
	
}