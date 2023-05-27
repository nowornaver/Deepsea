// sdxzcv.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

void get_tax(int income) {
    int sodok;
    if (income <= 1000) {
        sodok=income * 0.08;
        printf("소득세는 %d만원이다.", sodok);

    }
    if (income > 1000) {
        
        sodok = (income - 1000)*0.10;
        int sodok1 = 1000*0.08;
        int sum = sodok + sodok1;

        printf("소득세는 %d만원이다.", sum);

    }

}
int main(void)
{
    int money;
    printf("소득입력하세요(만원)");
    scanf_s("%d", &money);
    get_tax(money);
    
}

