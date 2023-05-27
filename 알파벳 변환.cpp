// 20230503515.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void check_alpha(char a) {
   
    if (a <= 'z' && a>='a') {
        printf("알파벳 문자 입니다.");
    }
    if (a <= 'Z' && a >= 'A') {
        printf("알파벳 문자 입니다.");
    }
    else {
        printf("알파벳 문자 아닙니다.");
    }

}


int main(void)
{
    char a;
    printf("문자를 입력하세요");
    scanf_s("%c", &a);
    printf("%c", a);
    check_alpha(a);
    return 0;
}

