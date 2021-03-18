// Pointer_202131419_LeeJinWoo.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main() {
    int a = 20;

    int *ptr_a;
    ptr_a = &a;

    printf("a의 값 : %d\n", a);
    printf("a의 주솟값 : %d\n", &a);
    printf("ptr_a에 저장된 값 : %d\n", ptr_a);
    printf("ptr_a가 가르키는 변수의 값 : %d\n", *ptr_a);
}

 