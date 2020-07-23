/*
キーボードから文字列を入力させ、文字列中の「a」という文字を「b」に置き換えるコードを記述してください。

文字列を入力してください。
algebra
algebraをblgebrbに置き換えました。
*/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    printf("文字列を入力してください。\n");

    char str[MAX_LENGTH];
    scanf("%s", str);

    char source[MAX_LENGTH];
    strcpy(source, str);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == 'a') {
            str[i] = 'b';
        }
    }

    printf("%sを%sに置き換えました。", source, str);

    return 0;
}