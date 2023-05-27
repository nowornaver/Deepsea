// 20230527.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
int money_out;
int money;
int input;
int output;

void ibgum(int money) {
	input += money;
	printf("잔고는 %d원입니다.\n", input);

}
void chulgum(int output) {
	
	input -= output;
	printf("잔고는%d원입니다..\n", input);

}
int main(void)
{
	printf("*******welcome to express atm *****\n");
	int menu;

	while (1) {
		printf("1.잔액\n 2.입금\n 3.출금\n 4.종료\n");
		printf("메뉴를 선택하세요\n");
		scanf_s("%d", &menu);
		if (menu == 4) {
			break;
		}
		if (menu == 2) {
			printf("입금 금액을 입력하세요\n");
			scanf_s("%d", &money);
			ibgum(money);

		}
		if (menu == 3) {
			if (input > 0) {

				printf("출금 금액을 입력하세요\n");
				scanf_s("%d", &output);
				chulgum(output);
			}
			else {
				printf("잔고가 0원입니다. 출금 할 수없습니다.\n");
			}
			
		}
		if (menu == 1) {
			printf("잔고은 %d원입니다.\n",input);
		}
		
	}
	return 0;
}

