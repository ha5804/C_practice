#include <stdio.h>

int main(){
    int a, i, j, k;
    printf("input: ");
    scanf("%d", &a);
    for (i = 0 ; i <a; i ++){
        for (j = i; j < a -1; j ++){
            printf(" ");
        }
        for (k = 0; k <= i * 2 ; k ++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//블랭크느 4-3-2-1
//