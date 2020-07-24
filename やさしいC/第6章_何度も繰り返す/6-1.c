/*
次のように画面に出力するコードを記述してください。
1～10までの偶数を出力します。
2
4
6
8
10
*/

#include <stdio.h>

int main() {
    printf("1～10までの偶数を出力します。\n");

    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}