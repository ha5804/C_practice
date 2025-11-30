#include <stdio.h>
#include <string.h>
//char array로 저장한 str의 len 길이 반환 strlen()

int main(){
    char str[] = "Good morning!";
    //char str[]은 배열의 크기를 자동으로
    //문자열 길이에 맞춰서 컴파일러가 결정한다.
    //이때 문자열 길이는 good morning!
    //공백 + 문자 + 널문자('\0') 16바이트이다.
    for (int i = 0; i <strlen(str); i ++){
        if (str[i] == 'o'){
            str[i] = 'k';
        }
        //char 타입은 작은 따옴표 주의.
    }
    printf("Modified string: %s\n", str);
    //char array로 str을 저장하면 %s 출력 가능
    return 0;
}
