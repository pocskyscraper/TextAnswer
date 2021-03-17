/*
英字を大文字に変換するtoupper()関数、小文字に変換するtolower()関数を調べて、
次のように変換するコードを記述してください。

文字列を入力してください。
Hello
大文字にするとHELLOです。
小文字にするとhelloです。
*/

#include <ctype.h>
#include <stdio.h>

int main() {
    printf("文字列を入力してください。\n");

    char str[128];
    scanf("%s", str);

    printf("大文字にすると");
    for (int i = 0; str[i] != '\0'; ++i) {
        printf("%c", toupper(str[i]));
    }
    printf("です。\n");

    printf("小文字にすると");
    for (int i = 0; str[i] != '\0'; ++i) {
        printf("%c", tolower(str[i]));
    }
    printf("です。\n");

    return 0;
}