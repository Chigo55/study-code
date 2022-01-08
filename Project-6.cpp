// char : 1byte 정수형 (int : 4byte)
// character : 문자 (반각 문자 = ABCabc123_+?)
//                 (정각문자 = 한글, 한자, 일본어 등등)

#include <stdio.h>
//int main() {
//	char a = 43;
//	
//	printf("%d\n", a);
//	printf("%c\n", 43); // "+" == 43
//}

// ASCII : American Standard Code (문자-숫자)

int main() {
	char a;
	int b;

	printf("문자 입력 : ");
	scanf_s("%c", &a);
	printf("%c의 ASCII 값 : %d\n", a, a);

	/*------------------------------------------*/

	printf("숫자 입력 : ");
	scanf_s("%d", &b);
	printf("%d의 ASCII 값 : %c\n", b, b);
}