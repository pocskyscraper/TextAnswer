/*
xのy乗を返す関数int power(int x, int y)を作成し、
次のようにキーボードから入力して計算を行うコードを記述してください。

1番目の整数を入力してください。(1～5)
2
2番目の整数を入力してください。(1～5)
3
2の3乗は8です。
*/

#include <stdio.h>

int power(int x, int y);

int main() {
    printf("1番目の整数を入力してください。(1～5)");
    int value1 = 0;
    scanf("%d", &value1);
    if (value1 < 1 || value1 > 5) {
        return 0;
    }

    printf("2番目の整数を入力してください。(1～5)");
    int value2 = 0;
    scanf("%d", &value2);
    if (value2 < 1 || value2 > 5) {
        return 0;
    }

    printf("%dの%d乗は%dです。", value1, value2, power(value1, value2));

    return 0;
}

int power(int x, int y) {
    int result = x;
    for (int i = 1; i < y; ++i) {
        result *= x;
    }
    return result;
}