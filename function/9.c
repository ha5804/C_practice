#include <stdio.h>

int Fibonacci(int num){
    if (num == 0){
        return 0;
    }
    else if ((num == 1) || (num == 2)){
        return 1;
    }
    else{
        return Fibonacci(num-1) + Fibonacci(num-2);
    }
}

int main(){
    int num;
    printf("Enter the num : ");
    scanf("%d", &num);
    printf("F(%d) = %d\n", num, Fibonacci(num));
    return 0;
}