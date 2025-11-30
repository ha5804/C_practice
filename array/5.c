#include <stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    //array의 이름 arr은 arr[0]주소 를 반환.
    for (int i = 0; i < 5; i ++){
        (*ptr) += 2;
        //*ptr은 값을 바꿔준다.
        ptr ++;
        //ptr ++는 다음 array 요소로 이동한다.
        //ptr ++는 포인터가 가르키는 자료형 크기만큼
        //주소를 증가시킨다.
        //int -> 4바이트
        //char -> 1바이트
        //double -> 8바이트
        //이동크기 += sizeof(자료형)
    }
    for (int i = 0; i < 5; i ++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}