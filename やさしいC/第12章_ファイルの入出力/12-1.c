/*
次のように3文字幅で画面に出力するコードを記述してください。

1  2  3  4  5
2  4  6  8 10
3  6  9 12 15
4  8 12 16 20
5 10 15 20 25
*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            printf("%3d", i * j);
        }
        putchar('\n');
    }

    return 0;
}