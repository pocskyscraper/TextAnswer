/*
2科目のテストの点数(x1, x2)に、a点ずつを加算する関数add()を、
ポインタを使って定義してください。
キーボードからx1, x2, aを入力し、次のように出力するコードを記述してください。

2科目分の点数を入力してください。
78
65
加算する点数を入力してください。
12
12点加算しましたので
科目1は90点となりました。
科目2は77点となりました。
*/

#include <stdio.h>

void add(int* x1, int* x2, int a);

int main() {
    printf("2科目分の点数を入力してください。\n");
    int score1 = 0;
    int score2 = 0;
    scanf("%d", &score1);
    scanf("%d", &score2);

    printf("加算する点数を入力してください。\n");
    int adder = 0;
    scanf("%d", &adder);

    add(&score1, &score2, adder);
    printf("%d点加算しましたので\n", adder);
    printf("科目1は%d点となりました。\n", score1);
    printf("科目2は%d点となりました。\n", score2);

    return 0;
}

void add(int* x1, int* x2, int a) {
    *x1 += a;
    *x2 += a;
}