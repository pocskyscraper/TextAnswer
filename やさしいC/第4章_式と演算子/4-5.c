/*
キーボードから5科目のテストの点数を入力して、合計値と平均値を次のように出力するコードを記述してください。

科目1の点数を入力してください。
52(ユーザ入力)
科目2の点数を入力してください。
68(ユーザ入力)
科目3の点数を入力してください。
75(ユーザ入力)
科目4の点数を入力してください。
83(ユーザ入力)
科目5の点数を入力してください。
36(ユーザ入力)
5科目の合計点は314点です。
5科目の平均点は62.800000点です。
*/

#include <stdio.h>

#define SUBJECT_COUNT 5

int main() {
    int scores[SUBJECT_COUNT] = {0};
    for (int i = 0; i < SUBJECT_COUNT; ++i) {
        printf("科目%dの点数を入力してください。\n", i + 1);
        scanf("%d", &scores[i]);
    }

    int sum = 0;
    for (int i = 0; i < SUBJECT_COUNT; ++i) {
        sum += scores[i];
    }

    printf("%d科目の合計点は%d点です。\n", SUBJECT_COUNT, sum);
    printf("%d科目の平均点は%lf点です。", SUBJECT_COUNT,
           (double)sum / (double)SUBJECT_COUNT);

    return 0;
}