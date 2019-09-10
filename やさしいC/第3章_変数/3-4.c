/*
次のように画面に出力するコードを記述してください。

身長を入力してください。
165.2(ユーザ入力)
体重を入力してください。
52.5(ユーザ入力)
身長は165.200000センチです。
体重は52.500000キロです。
*/

#include <stdio.h>

int main(){
    printf("身長を入力してください。\n");
    
    double height = 0.0;
    scanf("%lf", &height);

    printf("体重を入力してください。\n");
    
    double weight = 0.0;
    scanf("%lf", &weight);

    printf("身長は%fセンチです。\n", height);
    printf("体重は%fキロです。", weight);

    return 0;
}