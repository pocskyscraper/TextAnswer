/*
int型の2つの数値の最小値を返す関数int min(int x, int y)を作成し、
次のようにキーボードから入力した整数の最小値を出力するコードを記述してください。

1番目の整数を入力してください。
10
2番目の整数を入力してください。
5
最小値は5です。
*/

#include <stdio.h>

int min(int x, int y);

int main() {
    printf("1番目の整数を入力してください。");
    int value1 = 0;
    scanf("%d", &value1);

    printf("2番目の整数を入力してください。");
    int value2 = 0;
    scanf("%d", &value2);

    printf("最小値は%dです。", min(value1, value2));

    return 0;
}

int min(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}