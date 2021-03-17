/*
文字列の長さを調べる関数int length(char str[])を作成してください。
実際にキーボードから文字列を入力して文字列の長さを調べるコードを記述してください。

文字列を入力してください。
Hello
文字列の長さは5です。
*/

#include <stdio.h>

int length(char str[]);

int main() {
    printf("文字列を入力してください。\n");

    char str[128];
    scanf("%s", str);

    printf("文字列の長さは%dです。", length(str));

    return 0;
}

int length(char str[]) {
    int i;
    for (i = 0; str[i] != '\0'; ++i) {
    }
    return i;
}