/*
int型の数値を2乗した値を返す関数int square(int x)を作成し、
次のようにキーボードから入力した整数の2乗を出力するコードを記述してください。

整数を入力してください。
5
5の2乗は25です。
*/

#include <stdio.h>

int square(int x);

int main() {
    printf("整数を入力してください。");
    int value = 0;
    scanf("%d", &value);

    printf("%dの2乗は%dです。", value, square(value));

    return 0;
}

int square(int x) { return x * x; }