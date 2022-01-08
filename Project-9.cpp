// 비교 연산자, 논리 연산자

#include <stdio.h>

int main() {
	//비교 연산자

	int a, b;
	scanf_s("%d%d", &a, &b);

	int p = a > b;
	int q = a < b;
	int r = a == b; // == : equal

	printf("%d %d %d\n", p, q, r);

	// a >= b : a는 b보다 크거나 같다
	// a <= b : a는 b보다 작거나 같다
	// a != b : a는 b가 아니다

	// bool : 진리값 저장용 변수 (1byte)

	bool s = a > b;
	bool t = a < b;
	bool u = a == b;

	printf("%d %d %d\n", s, t, u);

	/*------------------------------------------*/

	//논리 연산자 (그리고, 또는, ...)
	// && || !

	int c;
	scanf_s("%d", &c);

	bool v = (c >= 1) && (c <= 10); // 1<= c <= 10
	bool w = c == 3 || c == 7;
	bool x = !v; // x는 v가 아니다

	printf("%d %d %d\n", v, w, x);
}