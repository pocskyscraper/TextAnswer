/*
キーボードからテストの点数を入力させ、その合計点を出力するコードを記述してください。
最後に答えを出力させる場合には、0を入力するものとします。

テストの点数を入力してください。
52
68
75
83
36
0
テストの合計点は314点です。
*/

#include <stdio.h>

int main() {
    printf("テストの点数を入力してください。\n");

    int score = 0;
    int total = 0;
    do {
        scanf("%d", &score);
        total += score;
    } while (score != 0);

    printf("テストの合計点は%d点です。\n", total);

    return 0;
}