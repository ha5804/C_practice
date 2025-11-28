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
    //parr은 Pointer 배열이므로 메모리를 할당해야한다.
    //따라서 x앞에 메모리값을 전달해주는 &을 사용하자.

    SimpleFunc(arr);
    // 출력은 10이다. 
    // 왜나면 arr은 인자로 pointer type으로 전달 되기 때문이다.
    SimpleFunc(parr[0]);
    return 0;
}