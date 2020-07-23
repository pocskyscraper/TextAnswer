/*
キーボードから文字列を入力させ、文字列の長さを調べるコードを記述してください。

文字列を入力してください。
Hello
文字列の長さは5です。
*/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    printf("文字列を入力してください。\n");

    char str[MAX_LENGTH];
    scanf("%s", str);

    printf("文字列の長さは%dです。", strlen(str));

    return 0;
}