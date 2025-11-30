#include <stdio.h>

int main(void)
{
    int num = 10;
    //메모리에 num이 생성되고 값 10이 저장되었다.
    //추가로 할당되는 메모리는 랜덤이지만 일종의 규칙보유.
    int *ptr = &num;
    //ptr에 num의 주소를 저장하였다.
    //&은 num의 주소를 반환하게 해준다.
    int *ptr2 = ptr;
    //ptr2에 ptr을 저장하였다.
    //이때 ptr은 num의 주소이므로 ptr2도 num의 주소이다.
    (*ptr)++;
    (*ptr2)++;
    //*ptr은 ptr이 가르키는 주소의 값이다.
    //즉 위 두문장은 num의 값을 1씩 더해주었다.
    printf("%d\n", num);
    return 0;
}