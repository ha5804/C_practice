#include <stdio.h>

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int *fptr = arr;
    int *bptr = &arr[5];
    int i, temp;
    for (i = 0; i < 3; i ++){
        //pointer 2개를 사용해 앞 뒤를 바꾸기때문에,
        //i는 절반까지만 해야한다. 홀수도 동일 가운데는 어차피 안변함.
        temp = *fptr;
        //temp에 arr[0] = 1 값 저장
        *fptr = *bptr;
        //fptr에 arr[5] = 6 값 저장
        *bptr = temp;
        //bptr에 temp = 1 값 저장
        //이때 주소가 아닌 값을 저장하는 이유는 주소는 유지시켜
        //pointer을 이용해 순회해야 하기 때문.
        fptr += 1;
        bptr -= 1;
    }
    for (i = 0; i <6; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}