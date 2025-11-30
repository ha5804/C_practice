#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[4];
    //역순 순회하기 위해서는 마지막 요소를 저장하면 된다.
    int total = 0;
    for (int i = 0; i<5; i ++){
        total += (*ptr);
        ptr--;
    }
    printf("%d\n", total);
    return 0;
}