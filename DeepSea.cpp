// rt4546.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int even(int a) {
	if (a % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int absolute(int a) {
	int b;
	if (a < 0) {
		b = -a;
		return b;
	}
	else {
		b = a;
		return b;
	}
}
int sing(int a) {
	if (a < 0) {
		return -1;
	}
	if (a > 0) {
		return 1;
	}
	if (a == 0) {
		return 0;
	}
}

int main(void)
{
	int a;
	printf("정수를 입력하세요");
	scanf("%d", &a);
	even(a);
	printf("even의 결과 %d", even(a));
	printf("absolute()의 결과:%d", absolute(a));
	printf("absolute()의 결과:%d", sing(a));
	


	return 0;
}


