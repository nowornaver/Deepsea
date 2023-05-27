// jusawi.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int sum = 0;
int me_add(int  arr []) {
    
    for (int i = 0; i < 3; i++) {
        sum += arr[i];
    }
    return sum;
    
   

}
int main(void)
{
    srand((unsigned int)time(NULL));
    
        int arr[3] = { 1 + rand() % 6 ,1 + rand() % 6 ,1 + rand() % 6 }; //주사위 굴리기
      
        me_add(arr);
        printf("사용자 주사위 = (%d,%d,%d)=%d\n", arr[0], arr[1], arr[2], sum);
        int a = sum;
        int arr1[3] = { 1 + rand() % 6 ,1 + rand() % 6 ,1 + rand() % 6 }; //주사위 굴리기
        me_add(arr1);
        printf("컴퓨터 주사위 = (%d,%d,%d)=%d\n", arr1[0], arr1[1], arr1[2], sum-a);
        int b = sum - a;
        if (a > b) {
            printf("사용자 승리\n");
           
        }
        else if (a < b) {
            printf("컴퓨터 승리\n");
           
        }
        else {
            printf("무승부\n");
            
        }
        
        
   

    return 0;
}

