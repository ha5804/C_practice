#include <stdio.h>
void SimpleFunc(int *ptr)
{
    printf("ptr이 가리키는 값: %d\n", *ptr);
}

int main(){
    int arr[10] = { 10, 20, 30 };
    int *parr[20];
    int x = 99;
    parr[0] = &x;

    SimpleFunc(arr);
    SimpleFunc(parr[0]);
    return 0;
}