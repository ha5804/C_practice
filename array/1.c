#include <stdio.h>

int main(){
    int num, i;
    printf("Enter the num : ");
    scanf("%d", &num);
    int arr[num];
    for (i = 0; i < num; i ++){
        printf("input %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (i = num-1; i >= 0; i --){
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}