#include <stdio.h>

int main(){
    int *arr1[5];
    int *arr2[3][5];

    int **ptr1 = arr1;
    //arr1은 포인터 배열이다. 따라서 포인터 배열의 이름은 더블포인터로 decay.
    //따라서 더블포인터로 받아주저야 한다.
    int (*ptr2)[5] = arr2;
    //arr2는 2d 포인터 배열로
    return 0;
}

//일반 1d 포인터 arr은 별 두개, 2d는 별 1개에 [5]로 기억하자.
