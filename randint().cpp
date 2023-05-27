// 20230524547.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
echo "# Deepsea" >> README.md
git init
git add README.md
git commit - m "first commit"
git branch - M main
git remote add origin git@github.com:nowornaver / Deepsea.git
git push - u origin main
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randint() {
   
   int a= 10 + rand() % (90 - 11);
   
    printf("%d   ", a);
    
    
}
int main(void)
{
    for (int i = 0; i < 10; i++) {
       
        randint();
    }
    return 0;
}