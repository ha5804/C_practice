#include <stdio.h>

int main(){
    int num1 = 10;
    int num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *temp;

    (*ptr1) += 10;
    (*ptr2) -= 10;

    temp = ptr1;
    // (*ptr1) = ptr2;
    //error! *ptr1은 값인데 주소를 저장하려함.
    //*ptr1은 정수를 저장하는공간, ptr은 그 정수의 주소를 저장하는 공간!
    ptr1 = ptr2;
    ptr2 = temp;
    printf("swap to pointer : %d %d\n", *ptr1, *ptr2);
    return 0;
}