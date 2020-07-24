/*
次のように画面に出力するコードを記述してください。

あなたは何歳ですか？
23(ユーザ入力)
あなたは23歳です。
*/

#include <stdio.h>

int main() {
    printf("あなたは何歳ですか？\n");

    int age = 0;
    scanf("%d", &age);

    printf("あなたは%d歳です。", age);

    return 0;
}