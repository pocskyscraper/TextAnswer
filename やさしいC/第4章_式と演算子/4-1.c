/*
次の計算結果を出力するコードを記述してください。

0 - 4
3.14 * 2
5 / 3
30 mod 7
(7 + 32) / 5
*/

#include <stdio.h>

int main() {
    printf("%d\n", 0 - 4);
    printf("%lf\n", 3.14 * 2);
    printf("%lf\n", (double)5 / (double)3);
    printf("%d\n", 30 % 7);
    printf("%lf", (double)(7 + 32) / (double)5);

    return 0;
}