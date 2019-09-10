/*
次のように画面に出力するコードを記述してください。

円周率の値はいくつですか？
3.14(ユーザ入力)
円周率の値は3.140000です。
*/

#include <stdio.h>

int main(){
    printf("円周率の値はいくつですか？\n");
    
    double pi = 0.0;
    scanf("%lf", &pi);

    printf("円周率の値は%fです。", pi);

    return 0;
}