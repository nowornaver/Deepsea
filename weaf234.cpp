#include "weaf234.h"
// 20230707.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void)
{
    char solution[100] = "meet at midnight";
    char answer[100] = "____ __ _______";
    char ch;
    int i;
    while (1) {
        printf("���ڿ��� �Է��ϼ���:%s\n", answer);
        printf("���ڸ� �����ϼ���");
        ch = _getch();
        for (i = 0; solution[i] != NULL; i++) {
            if (solution[i] == ch)
                answer[i] = ch;
        }
        if (strcmp(solution, answer) == 0)
            break;

    }






    return 0;
}