#include <stdio.h>
int AddToTotal(int num){
    //static type을 이용하면 함수를 호출해도 누적하여 사용할 수 있는 변수 선언 가능!
    static int current_total = 0;
    current_total += num;
    return current_total;

}

int main()
{
    int num;
    printf("Enter a number to add to total: ");
    scanf("%d", &num);
    printf("Current total: %d\n", AddToTotal(num));

    printf("Enter another number to add to total: ");
    scanf("%d", &num);
    printf("Current total: %d\n", AddToTotal(num));
    return 0;
}