/*
キーボードから5人分のテストの点数を入力させ、70点以上の学生の数をカウントするコードを記述してください。

テストの点数を入力してください。
80
60
22
50
75
1番目の人の点数は80点です。
2番目の人の点数は60点です。
3番目の人の点数は22点です。
4番目の人の点数は50点です。
5番目の人の点数は75点です。
70点以上の学生は2人です。
*/

#include <stdio.h>
#define COUNT 5
#define BASEMENT 70

int main() {
    printf("テストの点数を入力してください。\n");

    int scores[COUNT] = {0};
    int count = 0;
    for (int i = 0; i < COUNT; ++i) {
        scanf("%d", &scores[i]);
        if (scores[i] > BASEMENT) {
            ++count;
        }
    }

    for (int i = 0; i < COUNT; ++i) {
        printf("%d番目の人の点数は%d点です。\n", i + 1, scores[i]);
    }
    printf("70点以上の学生の数は%d人です。\n", count);

    return 0;
}