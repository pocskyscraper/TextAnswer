/*
次のように画面に出力するコードを記述してください。

身長と体重を入力してください。
165.2(ユーザ入力)
52.5(ユーザ入力)
身長は165.200000センチ：体重は52.500000キロです。
*/

#include <stdio.h>

int main() {
    printf("身長と体重を入力してください。\n");

    double height = 0.0;
    scanf("%lf", &height);

    double weight = 0.0;
    scanf("%lf", &weight);

    printf("身長は%fセンチ：体重は%fキロです。\n", height, weight);

    return 0;
}