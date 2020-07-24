/*
8-2のsquare()関数のコードを、関数形式マクロを使って記述してください。
*/

#include <stdio.h>

#define SQUARE(x) (x * x)

int main() {
    printf("整数を入力してください。");
    int value = 0;
    scanf("%d", &value);

    printf("%dの2乗は%dです。", value, SQUARE(value));

    return 0;
}