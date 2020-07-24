/*
8-3のpower()関数をmain()関数とは別のファイルに記述し、
同時にヘッダファイルも作成してください。
*/

#include "8-5.h"

#include <stdio.h>

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
