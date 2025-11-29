#include <stdio.h>

int cal_sum(int num){
    if (num == 1){
        return 1;
    }
    return num + cal_sum(num-1);
}

int main(){
    int num;
    printf("Enter the num : ");
    scanf("%d", &num);
    printf("1 to %d : %d\n", num, cal_sum(num));
    return 0;
}
