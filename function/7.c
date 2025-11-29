#include <stdio.h>
//Factorial의 정의에 대해 생각하자.
//Factorial = n! =  n * (n-1)! = n * (n-1) * (n-2)!이다.
//base (종료조건)을 만들고 작은부분으로 쪼갠 함수를 호출하자.
int Factorial(int num){
    if (num == 0){
        return 1;
    }
    else{
        return num  * Factorial(num-1);
    }

}
int main(){
    int n;
    printf("Enter the num : ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, Factorial(n));
    return 0;
}