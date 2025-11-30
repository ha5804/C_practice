#include <stdio.h>

void Swap3(int *ptr1, int *ptr2, int *ptr3){
    int temp;
    temp = *ptr3;
    *ptr3 = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    // int *temp;
    // temp = ptr3;
    // ptr3 = ptr1;
    // ptr1 = ptr2;
    // ptr2 = temp;
}

int main(){
    int num1 = 10, num2 = 20, num3 = 30;
    Swap3(&num1, &num2, &num3);
    printf("%d %d %d\n", num1, num2, num3);
    return 0;
}

//swap할때 temp를 ptr로 선언할지, int로 선언할지
//결정은 출력문에 달려있다.
//출력을 ptr로 한다면, temp가 int던, pointer던 상관없다.
//그러나 출력을 num1 자체로 한다면 temp는 무조건 int여야한다.
//주소가 바뀌었다고 그 값이 바뀌지 않기 때문이다.