#include <stdio.h>

int main()
{
    int cal, num1, num2;
    printf("input calculation option : ");
    scanf("%d", &cal);
    printf("num1 : ");
    scanf("%d", &num1);
    printf("num2 : ");
    scanf("%d", &num2);
    calculator(cal, num1, num2);
    return 0;
}