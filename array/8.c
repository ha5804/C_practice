#include <stdio.h>

int SquareByValue(int num){
    return num * num;
}

void SquareByReference(int *ptr){
    *ptr = (*ptr) * (*ptr);
}


int main(){
    int num = 5;
    printf("Value %d\n", SquareByValue(num));
    SquareByReference(&num);
    printf("%d\n", num);
    return 0;
}