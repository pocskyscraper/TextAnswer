/*
次のように正負を反転して出力するコードを記述してください。

整数を入力してください。
3(ユーザ入力)
正負を反転すると-3です。
*/

#include <stdio.h>

int main() {
    printf("整数を入力してください。\n");

    int value = 0;
    scanf("%d", &value);

    printf("正負を反転すると%dです。", -value);

    return 0;
}