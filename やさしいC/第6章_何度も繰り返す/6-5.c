/*
キーボードから数を入力させ、その数が素数であるかどうかを判断するコードを記述してください。

2以上の素数を入力してください。
7
7は素数です。
*/

#include <stdio.h>

int main(){    
    printf("2以上の素数を入力してください。\n");

    int value = 0;
    scanf("%d", &value);

    if (value < 2){
        printf("入力値が不正です。\n");
        return 0;
    }

    int isDivided = 0;
    for (int i = 2; i < value; ++i){
        if (value % i == 0) {
            isDivided = 1;
            break;
        }
    }

    if (isDivided == 0){
        printf("%dは素数です。\n", value);
    }else{
        printf("%dは素数ではありません。\n", value);
    }

    return 0;
}