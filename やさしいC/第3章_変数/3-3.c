/*
次のように画面に出力するコードを記述してください。

アルファベットの最初の文字はなんですか？
a(ユーザ入力)
アルファベットの最初の文字はaです。
*/

#include <stdio.h>

int main() {
    printf("アルファベットの最初の文字はなんですか？\n");

    char letter = getchar();

    printf("アルファベットの最初の文字は%cです。", letter);

    return 0;
}