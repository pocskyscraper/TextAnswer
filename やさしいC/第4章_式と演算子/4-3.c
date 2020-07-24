/*
次のように高さと底辺を入力して、三角形の面積を出力するコードを記述してください。

三角形の高さを入力してください。
3(ユーザ入力)
三角形の底辺を入力してください。
5(ユーザ入力)
三角形の面積は7.500000です。
*/

#include <stdio.h>

int main() {
    printf("三角形の高さを入力してください。\n");

    int height = 0;
    scanf("%d", &height);

    printf("三角形の底辺を入力してください。\n");

    int base = 0;
    scanf("%d", &base);

    printf("三角形の面積は%lfです。", (double)(base * height) / 2.0);

    return 0;
}