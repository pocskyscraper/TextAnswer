/*
次のように整数を入力して、正方形の面積を出力するコードを記述してください。

正方形の辺の長さを入力してください。
3(ユーザ入力)
正方形の面積は9です。
*/

#include <stdio.h>

int main(){
    printf("正方形の辺の長さを入力して下さい。\n");

    int edge = 0;
    scanf("%d", &edge);

    printf("正方形の面積は%dです。", edge * edge);

    return 0;
}